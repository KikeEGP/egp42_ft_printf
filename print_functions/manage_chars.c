/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_chars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:18:49 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/23 21:47:47 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_char()
{
	int	result;

	result = 1;
	write(1, &c_argument, result);
	return (result);
}

int	print_string()
{
	int	result;

	result = 0;
	if (s_argument)
	{
		while (s_argument[result] != '\0')
			result += write(1, &s_argument[result], 1);
	}
	else
		result += write(1, "(null)", 6);
	return (result);
}
