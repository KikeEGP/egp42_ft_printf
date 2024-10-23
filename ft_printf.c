/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:13:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/23 14:05:31 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_argument_and_write(const char *specifier, va_list parameter)
{
	/*CHECK PROPERLY IF FUNCTIONS HERE ARE CORRECT*/
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
		/*Look how to establish LOWER or UPPER BASE in case of x or X*/
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

int	ft_printf(char const *format, ...)
{
	int		result;
	va_list	parameter;

	if (str == NULL)
		return (-1);
	result = 0;
	va_start(parameter, format);
	result += write_with_arguments(format, parameter);
	va_end(parameter);
	return (result);
}
