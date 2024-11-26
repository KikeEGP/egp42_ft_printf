#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	result;
	int	str;
	static char	*string;

	result = 0;
	str = -5;
	string ="Buenas! evila-ro quiere proponer un Ciclo de Cine navideño. Proyecciones de: La jungla de Cristal, el Día de la Bestia y Gremlins. Yo quiero añadir una a la lista, que alguien me comentó y yo ya tenía en mente poner: El Apartamento. Vamos a proponerlo al staff de modo conjunto, para que haya alguien sí o sí y el evento no caiga por ausencia del organizador. Lo escribo por aquí por la siguiente razón: me puedo comprometer a estar con Gremlins y con mi propuesta, porque están en Filmin y las puedo poner. No tengo cuenta propia de Disney+ ni Netflix, que es donde están La jungla de Cristal y El Día de la Bestia, respectivamente. A lo mejor el propio Enrique tiene alguna copia física, pero si no pudiera aportarla él, ¿hay alguien por aquí que pudiera ofrecerla? Gracias por vuestra atención. Vamos a ver si podemos sacar esto adelante. Abro este hilo para coordinarnos enytre quienes estén dispuestos a particiar y cuadrar";
	result = ft_printf("%d%s%-", str, string);
	//ft_printf("%d%s%-", str, string);
	ft_printf("\nResult is %d\n", result);
	return (0);
}
