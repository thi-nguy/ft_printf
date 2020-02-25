/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <thi-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:48:26 by weilin            #+#    #+#             */
/*   Updated: 2020/02/24 14:17:48 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	fillwidth_char(t_data *t)
{
	int i;

	i = t->flag.width - 1;
	while (i > 0)
	{
		t->nb_print += ((t->flag.zero == 1) ?
			write(t->fd, "0", 1) : write(t->fd, " ", 1));
		i--;
	}
}

void	print_char(t_data *t, unsigned char ch)
{
	if (t->flag.minus == 1)
	{
		t->nb_print += write(t->fd, &ch, 1);
		fillwidth_char(t);
	}
	else
	{
		fillwidth_char(t);
		t->nb_print += write(t->fd, &ch, 1);
	}
	t->i++;
}

void	fillwidth_str(t_data *t)
{
	int	i;

	i = t->flag.width - ft_strlen(t->bf);
	while (i > 0)
	{
		t->nb_print += ((t->flag.zero) == 1 ?
			write(t->fd, "0", 1) : write(t->fd, " ", 1));
		i--;
	}
}
void	print_str(t_data *t)
{
	char	*tmp;

	if (t->flag.prec >= 0 &&
			t->flag.prec <= (int)ft_strlen(t->bf))
	{
		tmp = ft_strsub(t->bf, 0, t->flag.prec);
		free(t->bf);
		t->bf = tmp;
	}
	if (!(t->bf))
		return ;
	if (t->flag.minus == 1)
	{
		t->nb_print += write(t->fd, t->bf, ft_strlen(t->bf));
		fillwidth_str(t);
	}
	else
	{
		fillwidth_str(t);
		t->nb_print += write(t->fd, t->bf, ft_strlen(t->bf));
	}
	t->i++;
	free(t->bf);
}

void	type_chars(char type, t_data *t)
{
	unsigned char	ch;
	char			*str;

	t->flag.minus == 1 ? t->flag.zero = 0 : 0; // 
	if (type == 'c')
	{
		ch = (unsigned char)va_arg(t->valist, int);
		print_char(t, ch);
	}
	else if (type == 's')
	{
		if ((str = (char*)va_arg(t->valist, char*)) != NULL)
		{
			if (!(t->bf = ft_strdup(str)))
				return ;
		}
		else if (!(t->bf = ft_strdup("(null)"))) // why?
			return ;	
		print_str(t);
	}
}

void	get_percent(t_data *t)
{
	int tmp;
	
	tmp = t->flag.width;
	if (t->flag.minus == 1)
	{
		t->nb_print += write(t->fd, "%", 1);
		while (tmp-- > 1)
			t->nb_print += write(t->fd, " ", 1);
	}
	else
	{
		while (tmp-- > 1)
			t->nb_print += (t->flag.zero ?
					write(t->fd, "0", 1) : write(t->fd, " ", 1));
		t->nb_print += write(t->fd, "%", 1);
	}
	t->i++;
}

void parse_type(const char *fmt, t_data *t)
{
	/*
	else if (fmt[t->i] == 'd' || fmt[t->i] == 'i')
		get_int(t);
	*/
 	if (fmt[t->i] == 'c' || fmt[t->i] == 's')
		type_chars(fmt[t->i], t);
	else if (fmt[t->i] == '%')
		get_percent(t);
	else if (fmt[t->i] != '\0')
		print_char(t, fmt[t->i]);
}

void	init_flag(t_data *t)
{
	t->flag.minus = 0;
	t->flag.zero = 0;
	t->flag.width = 0;
	t->flag.prec = -1;
}

void parse_prec(const char *fmt, t_data *t) // 
{
	if (t->flag.prec >= 0)
	{
		t->i++;
		return;
	} //if already exist then do not take more prec
	else if (fmt[t->i] == '.' && fmt[t->i + 1] == '*')
	{
		t->flag.prec = va_arg(t->valist, int);
		return ;
	}
	if (fmt[t->i] == '.' && ft_isdigit(fmt[t->i + 1]))
	{
		t->i++;
		t->flag.prec = ft_atoi(fmt + t->i);
		while (ft_isdigit(fmt[t->i]))
			t->i++;
	}
	else
		t->flag.prec = 0;
}

void parse_width(const char *fmt, t_data *t)
{
	int len;

	len = ft_strlen(fmt + t->i);
	if (t->flag.width > 0)
	{
		t->i++;
		return ;
	} //if already exist then do not take more width
	while (fmt[t->i] != '\0')
	{
		if (ft_isdigit(fmt[t->i]))
			return;
		t->i++;
	} //if already exist width as a number, then do not take more width
	if (t->i < len - 1)
		t->flag.width = va_arg(t->valist, int);
}

void parse_flag(const char *fmt, t_data *t)
{
	while (ft_strchr("'-0*.123456789", fmt[t->i]))
	{
		fmt[t->i] == '-' ? t->flag.minus = 1 : 0;
		fmt[t->i] == '0' ? t->flag.zero = 1 : 0;
		
		if (fmt[t->i] == '.')
			parse_prec(fmt, t);
		if (fmt[t->i] == '*')
			parse_width(fmt, t);
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
