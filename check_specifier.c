/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:08:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/17 19:33:10 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*Be careful to move to main function or at least to include header*/
/*
Purpose of this function: check if ther's an error, 
expect one argument or more, and if (just one argument && it's a %%)*/
/*We use this function after check with strchr that there's a char % at least*/
int	check_if_specifier(char const *str)
{
	char	*first_specifier;
	char	*last_specifier;
	size_t	check;

	first_specifier = ft_strchr(str, '%');
	last_specifier = ft_strrchr(str, '%');
	/*if (first_specifier) check that you don't need this condition*/
	check = ft_strlen(first_specifier) - ft_strlen(last_specifier);
	return (check);
}

int	write_percent_or_zero_arg(char const *str)
{
	int		result;
	int		i;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			result--;
		}
		write(1, &str[i], 1);
		i++;
		result++;
	}
	return (result);
}
