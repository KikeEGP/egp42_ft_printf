/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_extra_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:46:06 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/22 20:23:59 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include SOMETHING*/

int	print_space_decimal_bonus(int dec_argument)
{
	int		result; /*PUT A CORRECT INCLUDE*/

	result = 0;
	if (dec_argument >= 0)
		result += print_char(32);
	result += putnbr_base(dec_argument, LOWER_HEXA_BASE, 10);
	return (result);
}

int	print_plus_decimal_bonus(int dec_argument)
{
	int		result;

	result = 0;
	if (dec_argument > 0)
		result += print_char('+');
	result += putnbr_base(dec_argument, LOWER_HEXA_BASE, 10);
	return (result);
}

int	print_hash_hexadecimal_bonus(int hexa_argument, int specifier)
{
	int		result;

	result = 0;
	if (hexa_argument != 0)
	{
		if (specifier == 'x')
		{
			result += print_string("0x");
			result += putnbr_base(hexa_argument, LOWER_HEXA_BASE, 16);
		}
		else if (specifier == 'X')
		{
			result += print_string("0X");
			result += putnbr_base(hexa_argument, UPPER_HEXA_BASE, 16);
		}
	}
	else
		result += print_char('0');
	return (result);
}
