/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_characters_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 01:13:34 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/11/01 02:33:27 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf_bonus.h"

static int  print_flags_signed_decimal(char flag, int decimal_argument)
{
  int  result;

  result = 0;
  if (decimal_argument < 0)
    result += print_signed_decimal(decimal_argument);
  else
  {
    result += print_char(flag);
    result += print_loop(decimal_argument, LOWER_HEXA_BASE, 10);
  }
  return (result);
}

static int  print_flag_hash(unsigned int hexa_argument, char specifier)
{
  int  result;

  result = 0;
  if (specifier == 'x')
    result += print_string("0x");
  else if (specifier == 'X')
    result += print_string("0X");
  result += print_hexadecimal(hexa_argument, specifier);
  return (result);
}

/*Check flags + #*/
int  check_flags(char flag, char specifier, va_list ap)
{
  int  result;

  result = 0;
  if (((flag == 43) || (flag == 32)) 
		  && ((specifier == 'd') || (specifier == 'i')))
    result += print_flags_signed_decimal(flag, va_arg(ap, int));
  else if ((flag == '#') && ((specifier == 'x') || (specifier == 'X')))
    result += print_flag_hash(va_arg(ap, unsigned int), specifier);
  return (result);
}
