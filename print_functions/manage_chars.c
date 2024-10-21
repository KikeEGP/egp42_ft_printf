/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_chars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:18:49 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/21 15:06:05 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_char(int c_argument)
{
	int		result;
	unsigned char	letter;

	letter = (unsigned char)c_argument;
	result = 1;
	write(1, &letter, result);
	return (result);
	/*Check if this is correct. When error, writes -1?*/
}

int	print_string(char *s_argument)
{
	int	result;

	result = 0;
	if (s_argument)
	{
		while (s_argument[result] != '\0')
			result += print_char(s_argument[result]);
	}
	else
		result += write(1, "(null)", 6);
	return (result);
}
