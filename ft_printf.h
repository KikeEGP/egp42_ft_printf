/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:03:38 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/17 19:27:50 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>/*For write()*/
# include <stdlib.h>/*For malloc() and free()*/
# include <stdarg.h>/*For va_list, va_start(), va_arg(), va_copy(), va_end()*/
# include "libft/libft.h"

# define UPPER_HEXA_BASE "0123456789ABCDEF"
# define LOWER_HEXA_BASE "0123456789abcdef"

int	ft_printf(char const *str, ...);
int check_if_specifier(char const *str);
int	write_percent_or_zero_arg(char const *str);

#endif
