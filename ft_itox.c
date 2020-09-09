/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 14:48:32 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/09/09 15:51:50 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int				get_size_hex(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = 4294967296 + n;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	i++;
	return (i);
}

static char		base_x(int d, char type)
{
	char	c;

	if (d < 16 && type == 'x')
		c = d - 10 + 'a';
	else if (d < 16 && type == 'X')
		c = d - 10 + 'A';
	return (c);
}

char			*ft_itox(long int n, char type)
{
	char	*str;
	int		i;
	int		len;
	int		d;

	len = get_size_hex(n);
	if (!(str = malloc((len + 1) * sizeof(*str))))
		return (NULL);
	i = len - 1;
	str[len] = '\0';
	if (n < 0)
		n = 4294967296 + n;
	while (n >= 16)
	{
		d = n % 16;
		d < 10 ? str[i] = (d + '0') : base_x(d, type);
		n = n / 16;
		i--;
	}
	n < 10 ? str[i] = (n + '0') : base_x(n, type);
	return (str);
}
