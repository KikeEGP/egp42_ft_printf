/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:03:38 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/23 14:55:01 by enrgil-p         ###   ########.fr       */
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

int	ft_printf(char const *format, ...);
/*											manage_chars					*/
int	print_char(int c_argument);
int	print_string(const char *s_argument);
/*											manage_numbers					*/
int	print_hexadecimal(unsigned int hexa_argument, int specifier);
int	print_pointer(void *p_argument);
int	putnbr_base(long long num, char *base_chars, int base);
#endif
