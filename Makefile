# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 16:18:50 by thi-nguy          #+#    #+#              #
#    Updated: 2020/02/27 11:51:09 by thi-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_atoi.c ft_bzero.c ft_isdigit.c ft_strchr.c ft_strdup.c ft_strlen.c\
		 ft_substr.c ft_itoa.c\
		 process_char_flag-0.c  process_str_flag-0.c process_int_flag-0.c\
		 process_precision.c\
		 ft_printf.c\

OBJ = $(SRC:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
