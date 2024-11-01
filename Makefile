# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 18:13:30 by enrgil-p          #+#    #+#              #
#    Updated: 2024/11/01 01:47:31 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c\
		print_functions/manage_chars.c\
		print_functions/manage_number.c

OBJS = $(SRCS:.c=.o)

BONUS = .bonus

BONUS_SRCS =	ft_printf_bonus.c\
				print_functions/flag_characters_bonus.c\
				print_functions/manage_number_bonus.c\
				print_functions/manage_chars_bonus.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)
 

CFLAGS = -Wall -Wextra -Werror
CC = cc
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	$(info CREATED $(NAME))
#	ar: creates *.a;  r: replace if previous exist; c: creates if doesn't exist

bonus: $(BONUS)
	$(BONUS): $(BONUS_OBJS)
	touch $(BONUS)
	ar rc $(BONUS) $(BONUS_OBJS)
	$(info CREATED $(BONUS))

clean:
	$(RM) $(OBJS)

compclean: all clean

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean compclean fclean re
