/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_prec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:07:27 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/09/07 15:09:00 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_prec(const char *fmt, t_data *t)
{
	if (t->flag.prec >= 0)
	{
		t->i++;
		return ;
	}
	else if (fmt[t->i] == '.' && fmt[t->i + 1] == '*')
	{
		t->flag.prec = va_arg(t->valist, int);
		t->i += 2;
	}
	else if (fmt[t->i] == '.' && ft_isdigit(fmt[t->i + 1]))
	{
		t->i++;
		t->flag.prec = ft_atoi(fmt + t->i);
		while (ft_isdigit(fmt[t->i]))
			t->i++;
	}
	else
		t->flag.prec = 0;
}
