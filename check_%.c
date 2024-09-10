/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_%.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:08:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/10 14:51:15 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Be careful to move to main function or at least to include header*/
/*
Pupose of this function: check if ther's an error, 
expect one argument or more, and if (just one argument && it's a %%)*/
/*We use this function after check with strchr that there's a char % at least*/ 
char	*check_%(char const *str)
{
	char	*first_%;
	char	*last_%;
	size_t	check;
	
	first_% = ft_strchr(str, '%');
	last_% = ft_strrchr(str, '%');
	check = ft_strlen(first_%) - ft_strlen(last_%);
	/*YOU COULD PUT THIS CONDTIONALS OUT OF THIS FUNCTION,
	AND RETURN AN INT OR SIZE_T*/
	if (check == 0)
		/*Implies same position, so there's just one % at the str,
		and that means:
				-one argument
				-an error*/
	else if (check == 1)
		/*Implies you have to write just a %, char 37*/
	else
		/*There are more than one specifier, so you must see carefuly
		how to manage it*/
}
