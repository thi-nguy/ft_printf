/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:56:01 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/02/29 18:46:03 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_flag
{
	int minus;
	int zero;
	int width;
	int prec;
	int neg;
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

void	fillwidth_char(t_data *t);
void	print_char(t_data *t, unsigned char ch);
void	get_char(char type, t_data *t);

void	fillwidth_str(t_data *t);
void	print_str(t_data *t);

void	get_int(t_data *t);
void	print_nbr(t_data *t);
void	check_sign_nbr(t_data *t);
void	print_neg_sign(t_data *t);
void	print_zero_width(t_data *t);
void	print_precision(t_data *t);

void	init_flag(t_data *t);
void	parse_flag(const char *fmt, t_data *t);
void	parse_type(const char *fmt, t_data *t);
void	parse(const char *fmt, t_data *t);
int		ft_printf(const char *fmt, ...);

void	get_percent(t_data *t);
void	parse_prec(const char *fmt, t_data *t);
void	parse_width(const char *fmt, t_data *t);

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
