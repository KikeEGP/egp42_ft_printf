# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 18:13:30 by enrgil-p          #+#    #+#              #
#    Updated: 2024/11/01 02:37:24 by enrgil-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

BONUS = .bonus

SRCS =	ft_printf.c\
		print_functions/manage_chars.c\
		print_functions/manage_number.c

OBJS = $(SRCS:.c=.o)

BONUS_SRCS =	bonus/ft_printf_bonus.c\
				bonus/print_functions/flag_characters_bonus.c\
				bonus/print_functions/manage_number_bonus.c\
				bonus/print_functions/manage_chars_bonus.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)
 

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

bonus: $(BONUS)
$(BONUS): $(OBJS) $(BONUS_OBJS)
	touch .bonus
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)
	$(info CREATED $(NAME))

.PHONY: all clean compclean fclean re
