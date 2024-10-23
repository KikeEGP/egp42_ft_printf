/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:13:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/23 14:29:09 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_argument_and_write(const char *specifier, va_list ap)
{/*Check if specifier must be const char * or just char*/
	if (specifier == 'c' || specifier == '%')/*% can have chars between %%*/
		return (print_char(va_arg(ap, int)));
	else if (specifier == 's')
		return (print_string(va_arg(ap, const char *)));
	else if (specifier == 'p')
		return (print_pointer(va_arg(ap, void *)));
	else if (specifier == 'd' || specifier == 'i')
		return (putnbr_base(va_arg(ap, int), LOWER_HEXA_BASE, 10));
	else if (specifier == 'u')
		return (putnbr_base(va_arg(ap, unsigned int), LOWER_HEXA_BASE, 10));
	else if (specifier == 'x' || specifier == 'X')
		return (print_hexadecimal(va_arg(ap, unsigned int), specifier));
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
		{
			result += print_char(format[i]);
			i++;
		}
		else
		{
			i++;
			result += check_argument_and_write(format[i], parameter);
			i++;
		}
	}
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
