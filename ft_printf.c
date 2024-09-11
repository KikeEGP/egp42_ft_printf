/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:13:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/11 21:16:59 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_printf(char const *str, ...)/*Check if char const * need a var name*/
{
	int		result;
	int		num_specifiers;/*MAYBE NEED TO DELETE*/
	int		check;
	va_list	parameter;

	result = 0;
	if (str == NULL)
		return (-1);
	result = 0;
	if (ft_strchr(str, '%'))
	{
		check = check_specifier(str);
		if (check != 1)
			/*function with va_list*/
		else
			/*function that writes %*/
	}
	else
		putstr/*or*/putchar/**/;/*OKAY, BUT YOU MUST COUNT CHARS WRITTEN*/
	return (result);
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
We will go then to another function and see how to convert the data in chars,
and then write it
*/
