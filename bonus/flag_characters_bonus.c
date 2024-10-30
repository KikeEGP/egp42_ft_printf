
int  check_flags(char flag, char specifier, va_list ap)
{
  int  result;

  result = 0;
  if ((flag == '+') && ((specifier == 'd') || (specifier == 'i')))
    result += print_flag_plus(va_arg(ap, int))
  else if ((flag == 32) && ((specifier == 'd') || (specifier == 'i')))
    result += print_flag_space(va_arg(ap, int));
  else if ((flag == '#') && ((specifier == 'x') || (specifier == 'X')))
    result += print_flag_hash(va_arg(ap, unsigned int), specifier);
  return (result);
}
