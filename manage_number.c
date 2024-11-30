/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:18:58 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/11/27 20:30:17 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*			Recursion loop to print ALL number conversions	*/
int	print_loop(unsigned long long n, char *base_c, unsigned long long bs)
{
	int	result;

	result = 0;
	if (n >= bs)
		result += print_loop((n / bs), base_c, bs);
	result += print_char(base_c[n % bs]);
	return (result);
}

/*		Like putnbr. Function to write digit, for d and i*/
int	print_signed_decimal(int num)
{
	int				result;
	unsigned int	unsign;

	result = 0;
	if (num < 0)
	{
		result += print_char('-');
		unsign = num * -1;
	}
	else
		unsign = num;
	result += print_loop(unsign, LOWER_HEXA_BASE, 10);
	return (result);
}

int	print_pointer(void *p_argument)
{
	int					result;
	unsigned long long	address;

	if (p_argument == 0)
		return (print_string("(nil)"));
	result = 0;
	result += print_string("0x");
	address = (unsigned long long)p_argument;
	result += print_loop(address, LOWER_HEXA_BASE, 16);
	return (result);
}

int	print_hexadecimal(unsigned int hexa_argument, char specifier)
{
	if (specifier == 'x')
		return (print_loop(hexa_argument, LOWER_HEXA_BASE, 16));
	else if (specifier == 'X')
		return (print_loop(hexa_argument, UPPER_HEXA_BASE, 16));
	return (0);
}
