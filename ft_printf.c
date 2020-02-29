/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <thi-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:48:26 by weilin            #+#    #+#             */
/*   Updated: 2020/02/25 15:53:40 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_flag(t_data *t)
{
	t->flag.minus = 0;
	t->flag.zero = 0;
	t->flag.width = 0;
	t->flag.prec = -1;
}

void parse_flag(const char *fmt, t_data *t)
{
	while (ft_strchr("'-0*.123456789", fmt[t->i]))
	{
		fmt[t->i] == '-' ? t->flag.minus = 1 : 0;
		fmt[t->i] == '0' ? t->flag.zero = 1 : 0;
		fmt[t->i] == '*' ? parse_width(fmt, t) : 0;
		if (fmt[t->i] == '.')
			parse_prec(fmt, t);
		else if (ft_isdigit(fmt[t->i]))
		{	
			t->flag.width = ft_atoi(fmt + t->i);
			while (ft_isdigit(fmt[t->i]))
				t->i++;
		}
		else
			t->i++;
	}
}

void parse_type(const char *fmt, t_data *t)
{
    
    if (fmt[t->i] == 'c' || fmt[t->i] == 's')
        get_char(fmt[t->i], t);
    else if (fmt[t->i] == 'd' || fmt[t->i] == 'i')
        get_int(t);
    else if (fmt[t->i] == '%')
        get_percent(t);
    else if (fmt[t->i] != '\0')
        print_char(t, fmt[t->i]);
}

void parse(const char *fmt, t_data *t)
{
	t->i++; // move the current index to the right 1 step
	init_flag(t); // initialize the all elements in flag of t to 0, and -1 in the case of precision (why -1?)
	parse_flag(fmt, t); // use -/-parse_flag-/-
	if (t->i > (int)ft_strlen(fmt) - 1)
		return;
	parse_type(fmt, t);
	//pending
}

int ft_printf(const char *fmt, ...)
{
	t_data t;

	ft_bzero(&t, sizeof(t)); // initiate a truct t with various information put as 0 at the begining
	va_start(t.valist, fmt); // start the list of variables
	if ((t.fd = 1) && fmt) // t.fd is assigned to 1, not comparation
	{
		t.len = (int)ft_strlen(fmt); // get the lenght of fmt
		while (t.i < t.len) // move i until the end of fmt
		{
			if (fmt[t.i] == '%' && t.len == 1) // if there is only %, we stop the program
				break;
			else if (fmt[t.i] == '%' && fmt[t.i + 1] == '%') // if there is %%, we print %% and continue
			{
				t.nb_print += write(t.fd, "%", 1);
				t.i += 2;
			}
			else if (fmt[t.i] == '%' && fmt[t.i + 1] != '%') // if there is a % and  after % is somthing else, we use -/-parse-/-
				parse(fmt, &t);
			else // if there is no %, we print everything we encounter.
				t.nb_print += write(t.fd, fmt + (t.i)++, 1);
		}
	}
	va_end(t.valist); // end the list of variable
	return (t.nb_print); // return the number of byte which is printed
}