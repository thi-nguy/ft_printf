/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weilin <weilin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 16:37:37 by weilin            #+#    #+#             */
/*   Updated: 2020/02/22 17:28:36 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_flag
{
	int plus;
	int minus;
	int zero;
	int space;
	int hash;
	int width;
	int prec;
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

int ft_printf(const char *fmt, ...);
void parse(const char *fmt, t_data *t);
void init_flag(t_data *t);
void parse_flag(const char *fmt, t_data *t);
void parse_width(const char *fmt, t_data *t);
void parse_prec(const char *fmt, t_data *t);
void parse_type(const char *fmt, t_data *t);

void	type_chars(char type, t_data *t);

#endif

