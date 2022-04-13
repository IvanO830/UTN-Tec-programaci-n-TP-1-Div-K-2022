/*
Iván Ostos
T.P. 1
 */

#include <stdio.h>
#include <stdlib.h>

#include "IvanFunciones.h"

int main(void)
{
	setbuf(stdout, NULL);//Sin esto Eclipse corre en desorden las lineas de texto.
///////////////////////////////////////////////////////////////////////////////////////////
	int opcion = 0;

	int kilometros = 0;
	int precioAerolineasArgentinas = 0;
	int precioLatam = 0;

	float descuentoAerolineas, interesAerolineas, bitcoinAerolineas, unitarioAerolineas;
	float descuentoLatam, interesLatam, bitcoinLatam, unitarioLatam;

	float diferenciaPrecio = 0;

/////////////////////////variables

	do
	{
		printf("\nMenú de opciones.\n1) Ingresar Kilómetros.\n2)Ingresar Precio de Vuelos.\n3) Calcular todos los costos.\n4) Informar Resultados.\n5) Carga forzada de datos.\n6) Salir. \n Ingrese un número de opción:" );
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:
			printf("\n1) Ingresar Kilómetros:");
			scanf("%d", &kilometros);
			while(1 > kilometros)
			{
				printf("\n1) Ingresar Kilómetros:");
				scanf("%d", &kilometros);
			}
			break;

		case 2:
			printf("\n2) Ingresar Precio de Vuelos.\n");
			printf("Ingresar el precio del vuelo en Aerolineas Argentinas:\n");
			scanf("%d", &precioAerolineasArgentinas);

			while(1 > precioAerolineasArgentinas)
						{
							printf("Ingresar el precio del vuelo en Aerolineas Argentinas:\n");
							scanf("%d", &precioAerolineasArgentinas);
						}

			printf("Ingresar el precio del vuelo en Latam:\n");
			scanf("%d", &precioLatam);

			while(1 > precioLatam)
						{
							printf("Ingresar el precio del vuelo en Latam:\n");
							scanf("%d", &precioLatam);
						}

			break;

		case 3:
			printf("\n3) Calcular todos los costos.\n");

			if(kilometros == 0 || precioAerolineasArgentinas == 0 || precioLatam == 0)
			{
				printf("\n\nNo se puede calcular sin los datos del vuelo.\n\n");
				break;
			}

			//Aerolineas
			descuentoAerolineas = descuentoCalculadora(precioAerolineasArgentinas, 10);
			interesAerolineas = interesCalculadora(precioAerolineasArgentinas, 25);
			bitcoinAerolineas = divisor(precioAerolineasArgentinas, 4606954.55);
			unitarioAerolineas = divisor(precioAerolineasArgentinas, kilometros);

			//Latam
			descuentoLatam = descuentoCalculadora(precioLatam, 10);
			interesLatam = interesCalculadora(precioLatam, 25);
			bitcoinLatam = divisor(precioLatam, 4606954.55);
			unitarioLatam = divisor(precioLatam, kilometros);

			diferenciaPrecio = diferencia(precioAerolineasArgentinas, precioLatam);

			printf("\n\nTodos los costos calculados.\n\n");
			break;

		case 4:
			printf("\n4) Informar Resultados.\n");

			if(kilometros == 0 || precioAerolineasArgentinas == 0 || precioLatam == 0)
						{
							printf("\n\nNo hay resultados que informar.\n\n");
							break;
						}

			printf("\nKMs ingresados: %d\n", kilometros);
			printf("Aerolineas Argentinas:\n a) Precio con tarjeta de débito: %f \n b) Precio con tarjeta de crédito: %f \n c) Precio pagando con bitcoin: %f \n d) Precio unitario: %f \n\n", descuentoAerolineas, interesAerolineas, bitcoinAerolineas, unitarioAerolineas);
			printf("Aerolineas Argentinas:\n a) Precio con tarjeta de débito: %f \n b) Precio con tarjeta de crédito: %f \n c) Precio pagando con bitcoin: %f \n d) Precio unitario: %f \n\n", descuentoLatam, interesLatam, bitcoinLatam, unitarioLatam);
			printf("La diferencia de precio es: %f", diferenciaPrecio);
			break;

		case 5:
			printf("\n5) Carga forzada de datos.\n");
			kilometros = 7090;
			precioAerolineasArgentinas = 162965;
			precioLatam = 159339;
			break;

		case 6:
			printf("\n6) Salir.\n");
			break;

		default:
			printf("\nError, opción invalida.\n");
		}

	}while (opcion != 6);

	return 0;
}


/*

Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
5. Carga forzada de datos
6. Salir

Aclaraciones del funcionamiento:
El menú se tiene que ver tal cual está descrito en la consigna. Los resultados se tienen que
mostrar con el mismo formato. Se puede realizar un submenú para ingresar los km y los
precios.
Los resultados se tienen que ver con el formato presentado en el menú. De la siguiente
manera.

La carga forzada se tiene que mostrar exactamente igual a la pantalla de resultados sin ingresar
ninguna opción previamente. Tiene que calcular todo al momento de apretar el botón con los
siguientes datos:
Km: 7090
Aerolineas Argentinas: $162965
Latam: $ 159339
(solo mostrar los resultados ya calculados)
Se deben realizar todas las validaciones necesarias para que el programa funcione
correctamente. Por ej: no se puede realizar cálculos si no hay vuelos ingresados.
Todas las funciones que realizarán los cálculos del menú se deberán realizar en una biblioteca
aparte, que contenga las funciones para realizar todas las operaciones.
En el menú deberán aparecer los valores actuales cargados en los vuelos de Latam y Aerolineas
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 */
