/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:35:44 by thi-nguy          #+#    #+#             */
/*   Updated: 2019/12/11 14:50:24 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!s)
		return (NULL);
	if (*s == '\0' || len < 0)
		return (NULL);
	if (start > ft_strlen(s))
		return ("");
	if (*s != '\0')
	{
		if (!(dest = malloc(sizeof(*dest) * len + 1)))
			return (NULL);
		i = 0;
		while (s[start] != '\0' && i < len)
		{
			dest[i] = (char)s[start];
			i++;
			start++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return ("");
}
