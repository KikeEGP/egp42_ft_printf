/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:03:38 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/10/29 20:13:11 by enrgil-p         ###   ########.fr       */
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
<<<<<<< HEAD
int	print_hexadecimal(unsigned int hexa_argument, char specifier);
int	print_pointer(size_t p_argument);
int	putnbr_base(long long num, char *base_chars, unsigned int base);
=======
int print_signed_decimal(int num);
int print_hexadecimal(unsigned int hexa_argument, char specifier);
int	print_pointer(void *p_argument);
int	print_loop(unsigned long long n, char *base_c, unsigned long long bs);
>>>>>>> 7dad8bd6a325017b6250382928096de5a641e72c
#endif
