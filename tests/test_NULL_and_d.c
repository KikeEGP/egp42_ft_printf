#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int result_1;
	int	result_2;

    result_1 = ft_printf("%d", NULL);
    ft_printf("\n");
    result_2 = printf("%d", NULL);
	printf("\nYour result is %d and original is %d", result_1, result_2);
    return (0);
}
