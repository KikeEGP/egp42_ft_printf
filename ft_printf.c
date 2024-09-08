/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:13:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/08 20:30:59 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int ft_printf(char const *str, ...)/*Check if char const * need a var name*/
{
		size_t	index;
		int		result;

		result = 0;
		index = 0;
		while (str[index] != '\0')
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
We will go then to another function and see how to convert the data in chars, and then write it
*/
