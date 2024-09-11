/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:08:45 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/11 21:41:43 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Be careful to move to main function or at least to include header*/
/*
Purpose of this function: check if ther's an error, 
expect one argument or more, and if (just one argument && it's a %%)*/
/*We use this function after check with strchr that there's a char % at least*/
int	check_specifier(char const *str)
{
	char	*first_specifier;
	char	*last_specifier;
	size_t	check;

	first_specifier = ft_strchr(str, '%');
	last_specifier = ft_strrchr(str, '%');
	check = ft_strlen(first_specifier) - ft_strlen(last_specifier);
	return (check);
}

char	*write_percent(char const	*str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == '%')
			i++;
		else
			write(1, &str[i], 1);
		i++;
	}
/*CORRECT THIS AND RETURN, IS INT AND COUNT OF WRITTEN!*/
