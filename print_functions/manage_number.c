/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:18:58 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/25 12:50:14 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*Function to write digit, for d, i and u*/
/*11-10-24	use it for x, X and p too, adding base as a parameter*/
int	putnbr_base(long long num, char *base_chars, unsigned int base)
{
	int	result;
	unsigned int	unsign;

	result = 0;
	if (num < 0 && base == 10)
	{
		result += print_char('-');
		unsign = num * -1;
	}
	else
		unsign = num;
	if (unsign >= base)
		result += putnbr_base((unsign / base), base_chars, base);
	result += print_char(base_chars[unsign % base]);
	return (result);
}

int	print_pointer(void *p_argument)
{
	int	result;

	if (ptr == NULL)
		return (print_string("(nil)"));
	result = 0;
	result += print_string("0x");
	result += putnbr_base(&p_argument, LOWER_HEXA_BASE, 16);
	return (result);
}

int	print_hexadecimal(unsigned int hexa_argument, char specifier)
{
	if (specifier == 'x')
		return (putnbr_base(hexa_argument, LOWER_HEXA_BASE, 16));
	else if (specifier == 'X')
		return (putnbr_base(hexa_argument, UPPER_HEXA_BASE, 16));
}
