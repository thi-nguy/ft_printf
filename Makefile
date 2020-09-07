# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 16:18:50 by thi-nguy          #+#    #+#              #
#    Updated: 2020/09/07 14:40:01 by thi-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_atoi.c ft_bzero.c ft_isdigit.c ft_strchr.c ft_strdup.c ft_strlen.c\
		 ft_substr.c ft_itoa.c ft_strnew.c ft_strjoin.c ft_itox.c\
		 process_char.c  process_str.c process_int.c process_hex.c\
		 process_u.c process_p.c\
		 parse_prec.c ft_printf.c\

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME):
	gcc -c -g $(SRC) $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
