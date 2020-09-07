/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 15:24:52 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/09/07 15:27:53 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		get_size_longi(long int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		n = 4294967296 + n;
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_longi_toa(long int n)
{
	char	*str;
	int		i;
	int		len;

	len = get_size_longi(n);
	if (!(str = malloc((len + 1) * sizeof(*str))))
		return (NULL);
	i = len - 1;
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n >= 10)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	str[i] = n + '0';
	return (str);
}

void	get_u(t_data *t)
{
	long int	nbr;
	char		*nbr_str;

	t->flag.minus == 1 ? t->flag.zero = 0 : 0;
	if ((nbr = (long int)va_arg(t->valist, long int)))
	{
		if (nbr < 0)
			nbr = 4294967296 + nbr;
		nbr_str = ft_longi_toa(nbr);
		t->bf = ft_strdup(nbr_str);
		if (t->bf)
			print_nbr(t);
	}
}
