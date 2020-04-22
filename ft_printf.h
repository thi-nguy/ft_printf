/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:56:01 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/03/03 14:50:50 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

typedef struct s_flag
{
	int minus; // - can le
	int zero; // 0 precision 0
	int width; // * minimum width, so ky tu moi lan in
	int prec; // . in bao nhieu ky tu, precision
	int neg; // dau negative, dung cho cac so am, negative.
} t_flag;

typedef struct s_data
{
	va_list valist; // list of variable
	t_flag flag; // struct of all kind of flag
	char *bf; // buffer
	int i; // index to know where are we in the fmt
	int fd; // why do we need it?
	int nb_print; // number of byte is printed
	int len; // length of fmt 
} t_data;
// Process Char
void	fillwidth_char(t_data *t);
void	print_char(t_data *t, unsigned char ch);
void	get_char(char type, t_data *t);

// Process String
void	fillwidth_str(t_data *t);
void	print_str(t_data *t);

// Process int
void	get_int(t_data *t);
void	print_nbr(t_data *t);
void	check_sign_nbr(t_data *t);
void	print_neg_sign(t_data *t);
void	print_rest_0_or_space(t_data *t);
void	get_prec(t_data *t);

// Process Hexadecimal
void	get_hex(char type, t_data *t);
char	*ft_itox(long int n, char type);
int	get_size_hex(long int n);

// Process Unsigned int
void	get_u(t_data *t);
char		*ft_longi_toa(long int n);
int	get_size_longi(long int n);

// Process Pointer/Address
void	print_rest_0_or_space_addr(t_data *t);
void		print_addr(t_data *t);
void		get_p(t_data *t);



// Process flag and type
void	init_flag(t_data *t);
void	parse_flag(const char *fmt, t_data *t);
void	parse_type(const char *fmt, t_data *t);
void	parse(const char *fmt, t_data *t);
int		ft_printf(const char *fmt, ...);

//void	get_percent(t_data *t);
void	parse_prec(const char *fmt, t_data *t);
void	parse_width(const char *fmt, t_data *t);
void	print_back(const char *fmt, t_data *t);

// libft
void	ft_bzero(void *str, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
int	ft_isdigit(int c);
int	ft_atoi(const char *str);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_itoa(int n);
int		get_size(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnew(size_t size);

#endif

