/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_int_flag-0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 12:41:20 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/03/03 12:30:03 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    get_int(t_data *t)
{
	int nbr;
	char *nbr_str;

	t->flag.minus == 1 ? t->flag.zero = 0 : 0;
	if ((nbr = (int)va_arg(t->valist, int)))
	{
		nbr_str = ft_itoa(nbr);
		t->bf = ft_strdup(nbr_str);
		if (t->bf)
			print_nbr(t);
	}
}

void	print_neg_sign(t_data *t)
{
	if (t->flag.neg == 1)
		t->nb_print += write(t->fd, "-", 1);
}


void	print_zero_width(t_data *t)
{
	int len;
	int	space;

	if(t->flag.neg == 1)
		len = (int)ft_strlen(t->bf) + 1;
	else
		len = (int)ft_strlen(t->bf);
	space = t->flag.width - ((t->flag.prec > (int)ft_strlen(t->bf) ? t->flag.prec : 0) + len);
	while (space > 0)
	{
		if (t->flag.zero == 1)
			t->nb_print += write(t->fd, "0", 1);
		else
			t->nb_print += write(t->fd, " ", 1);
		space--;
	}
}

void	print_precision(t_data *t)
{
	char *zeros;
	char *tmp;
	int i;
	int len;

	check_sign_nbr(t);
	tmp = NULL;
	if (!(t->bf))
		return;
	len = (int)ft_strlen(t->bf);
	if (t->flag.prec == 0 && t->bf[0] == '0')
		t->bf[0] = '\0';
	else if (t->flag.prec > len)
	{
		i = t->flag.prec - len;
		if (!(zeros = ft_strnew(i)))
			return ;
		while (i > 0)
			zeros[--i] = '0';
		tmp = ft_strjoin(zeros, t->bf);
		free(zeros);
		free(t->bf);
		t->bf = tmp;
	}
	t ->flag.prec >= 0 ? t->flag.zero = 0 : 0;
}

void    print_nbr(t_data *t)
{
	print_precision(t);
	if (t->flag.minus == 1)
	{
		print_neg_sign(t);
		t->nb_print += write(t->fd, t->bf, ft_strlen(t->bf));
		print_zero_width(t);
	}
	else if (t->flag.zero == 1)
	{
		print_neg_sign(t);
		print_zero_width(t);
		t->nb_print += write(t->fd, t->bf, ft_strlen(t->bf));
	}
	else
	{
		print_zero_width(t);
		print_neg_sign(t);
		t->nb_print += write(t->fd, t->bf, ft_strlen(t->bf));
	}
	t->i++;
	free(t->bf);
}

void    check_sign_nbr(t_data *t) // if bf is -345, copy bf from after the sign - (bf tro thanh 345)
{
	char *tmp;

	if(t->bf[0] == '-')
	{
		tmp = ft_strdup(t->bf + 1);
		free(t->bf);
		t->bf = tmp;
		t->flag.neg = 1;
	}
}

