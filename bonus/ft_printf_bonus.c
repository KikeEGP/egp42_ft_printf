/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:13:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/11/01 02:54:43 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

/*static int	check_loop_for_percent()
{
}*/

static int	check_argument_and_write(char specifier, va_list ap)
{/*Check if specifier must be const char * or just char*/
	if (specifier == 'c')
		return (print_char(va_arg(ap, int)));
	else if (specifier == 's')
		return (print_string(va_arg(ap, const char *)));
	else if (specifier == 'p')
		return (print_pointer(va_arg(ap, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (print_signed_decimal(va_arg(ap, int)));
	else if (specifier == 'u')
		return (print_loop(va_arg(ap, unsigned int),
			LOWER_HEXA_BASE, 10));
	else if (specifier == 'x' || specifier == 'X')
		return (print_hexadecimal(va_arg(ap, unsigned int), specifier));
	else if (specifier == '%')
		return (print_char('%'));
/*		while (specifier != %)*/
	return (0);
}

static int	print_format(char const *format, va_list  parameter)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			result += print_char(format[i++]);
		else
		{
			i++;
			if ((format[i] == 43) || (format[i] == 32) || (format[i] == 35))
				result += check_flags(format[i], format[i + 1], parameter);
			else
				result += check_argument_and_write(format[i++], parameter);
		}
	}
	return (result);
}

int	ft_printf(char const *format, ...)
{
	int		result;
	va_list	parameter;

	if (format == NULL)
		return (-1);
	result = 0;
	va_start(parameter, format);
	result += print_format(format, parameter);
	va_end(parameter);
	return (result);
}
