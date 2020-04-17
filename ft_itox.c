#include "ft_printf.h"

int	get_size_hex(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = 4294967296 + n;
	}
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	i++;
	return (i);
}

char		*ft_itox(long int n, char type) //negative number will be transfer in hex or considered as flag -?
{
	char	*str;
	int		i;
	int		len;
	int 	d;

	len = get_size_hex(n);
	if (!(str = malloc((len + 1) * sizeof(*str))))
		return (NULL);
	i = len - 1;
	str[len] = '\0';
	if (n < 0)
	{
		n = 4294967296 + n;
	} //Tai sao no khong truyen so am vao?
	while (n >= 16)
	{
		d = n % 16;
		if (d < 10)
			str[i] = d + '0';
		else if (d < 16 && type == 'x')
			str[i] = d - 10 + 'a';
		else if (d < 16 && type == 'X')
			str[i] = d - 10 + 'A';
		n = n / 16;
		i--;
	}
	if (n < 10)
		str[i] = n + '0';
	else if (n < 16 && type == 'x')
		str[i] = n - 10 + 'a';
	else if (n < 16 && type == 'X')
		str[i] = n - 10 + 'A';
	return (str);
}