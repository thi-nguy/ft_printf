/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:10:54 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/09/07 15:12:15 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_hex(char type, t_data *t)
{
	int	nbr;
	char		*nbr_str;

	t->flag.minus == 1 ? t->flag.zero = 0 : 0;
	nbr = (int)va_arg(t->valist, int);
	if (nbr || nbr == 0)
	{
		nbr_str = ft_itox(nbr, type);
		t->bf = ft_strdup(nbr_str);
		if (t->bf)
			print_nbr(t);
	}
}
