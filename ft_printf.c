/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:13:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/11 21:43:09 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_argument_and_write(const char *specifier, va_list parameter)
{
	if (specifier == 'c' || specifier == '%')
		return (print_char());
	else if (specifier == 's')
		return (print_string());
	else if (specifier == 'p')
		return (print_pointer());
	else if (specifier == 'd' || specifier == 'i')
		return (print_integer());
	else if (specifier == 'u')
		return (print_unsigned_decimal());
	else if (specifier == 'x' || specifier == 'X')
		return (print_hexadecimal());
}
static int	write_with_arguments(char const *str, va_list  parameter)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '%')
		{
			result += print_char(str[i]);
			i++;
		}
		else
		{
			i++;
			result += check_argument_and_write(str[i], parameter);
			i++;
		}

	}
}

int	ft_printf(char const *str, ...)/*Check if char const * need a var name*/
{
	int		result;
	int		check;
	va_list	parameter;

	if (str == NULL)
		return (-1);
	result = 0;
	check = check_if_specifier(str);
	//va_start(parameter, str);
	if (check > 1)
	{
			/*function with va_list. This will check if it's properly used %*/
			/*TEST IT COMPARING ORIGINAL, BEFORE YOU DO MORE
			CHECK IF PRINTF(STR, ARG1) WITH NO % COMPILES,
			AND SAME WITH YOURS*/
		result += write_with_arguments(str, parameter);
		va_end(parameter);
	}
	else
	{
		result += write_percent_or_zero_arg(str);
	//	va_end(parameter);
	}
	return (result);
}
/*
Okay, what do we have here?

Return value expected is an int

Two parameters
	The string "string with %d and similar",
	unknown number of vars, which are the data expected to be printed inside
	string
*/
/*
We must use write to print. 
We will write char until we find %. We check by what character is followed it.
We will go then to another function and see how to convert the data in chars,
and then write it
*/
