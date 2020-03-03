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
	int	nbr;
	char	*nbr_str;

	t->flag.minus == 1 ? t->flag.zero = 0 : 0;
	if (!(nbr = (int)va_arg(t->valist, int)))
		return ;
	if (type == 'x')
		nbr_str = itox(nbr);
	else if (tpe == 'X')
		nbr_str = itoX(nbr);
	t->bf = strdup(nbr_str);
	if (t->bf)
		print_nbr(t);
}

char	*itox(int nbr)
{

}
