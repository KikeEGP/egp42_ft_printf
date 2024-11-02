# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 18:13:30 by enrgil-p          #+#    #+#              #
#    Updated: 2024/11/02 20:58:57 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c\
		print_functions/manage_chars.c\
		print_functions/manage_number.c

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
	$(RM) $(OBJS) $(BONUS_OBJS)

compclean: all clean

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean compclean fclean re
