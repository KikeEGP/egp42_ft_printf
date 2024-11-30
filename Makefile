# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 18:13:30 by enrgil-p          #+#    #+#              #
#    Updated: 2024/11/27 20:29:05 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c\
		manage_chars.c\
		manage_number.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	$(info CREATED $(NAME))
#	ar: creates *.a;  r: replace if previous exist; c: creates if doesn't exist

clean:
	$(RM) $(OBJS)

compclean: all clean

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean compclean fclean re
