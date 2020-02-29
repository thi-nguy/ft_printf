/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 18:39:15 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/02/29 18:42:53 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnew(size_t size)
{
	char *str;

	str = (NULL);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_bzero(str, size);
	str[size] = '\0';
	return (str);
}
