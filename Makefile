# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 16:18:50 by thi-nguy          #+#    #+#              #
#    Updated: 2020/09/15 10:31:46 by thi-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc -c

AR = ar rc

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_isdigit.c ft_strchr.c ft_strdup.c ft_strlen.c\
		 ft_substr.c ft_itoa.c ft_strnew.c ft_strjoin.c ft_itox.c\
		 get_prec.c print_back.c init_flag.c\
		 process_char.c  process_str.c process_int.c process_hex.c\
		 process_u.c process_p.c process_percent.c\
		 parse_prec.c ft_printf.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC) -I $(HEADER)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all
