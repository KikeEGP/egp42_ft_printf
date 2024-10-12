/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:18:58 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/12 23:56:53 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*Function to write digit, for d, i and u*/
/*11-10-24	use it for x, X and p too, adding base as a parameter*/
int	putnbr_base(long long num, char *base_chars, int base)
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
		result += putnbr_base((unsign / base), base);
	result += print_char(base_chars[unsign % base]);
	/*HOW CAN I SWITCH TO UPPER ONLY IN CASE OF %X, only uppercase specifier*/
	return (result);
}

int	print_integer()/*For d and i*/
{
	/*Function call to putnbr()*/
}

int	print_unsigned_decimal()/*For u*/
{
	/*Need to cast int to unsgined? Or var does itself?*/
	/*Here, insert putnbr*/
}
