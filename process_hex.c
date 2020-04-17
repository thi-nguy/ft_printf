/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_hex_flag-0.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 13:45:43 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/03/03 14:50:40 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_hex(char type, t_data *t)
{
	long int	nbr;
	char	*nbr_str;

	t->flag.minus == 1 ? t->flag.zero = 0 : 0;
	if ((nbr = (long int)va_arg(t->valist, long int)))
	{
		nbr_str = ft_itox(nbr, type);
		t->bf = ft_strdup(nbr_str);
		if (t->bf)
			print_nbr(t);
	}
}