/*
Iv�n Ostos
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
		printf("\nMen� de opciones.\n1) Ingresar Kil�metros.\n2)Ingresar Precio de Vuelos.\n3) Calcular todos los costos.\n4) Informar Resultados.\n5) Carga forzada de datos.\n6) Salir. \n Ingrese un n�mero de opci�n:" );
		scanf("%d", &opcion);

		switch(opcion)
		{
		case 1:
			printf("\n1) Ingresar Kil�metros:");
			scanf("%d", &kilometros);
			while(1 > kilometros)
			{
				printf("\n1) Ingresar Kil�metros:");
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
			printf("Aerolineas Argentinas:\n a) Precio con tarjeta de d�bito: %f \n b) Precio con tarjeta de cr�dito: %f \n c) Precio pagando con bitcoin: %f \n d) Precio unitario: %f \n\n", descuentoAerolineas, interesAerolineas, bitcoinAerolineas, unitarioAerolineas);
			printf("Aerolineas Argentinas:\n a) Precio con tarjeta de d�bito: %f \n b) Precio con tarjeta de cr�dito: %f \n c) Precio pagando con bitcoin: %f \n d) Precio unitario: %f \n\n", descuentoLatam, interesLatam, bitcoinLatam, unitarioLatam);
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
			printf("\nError, opci�n invalida.\n");
		}

	}while (opcion != 6);

	return 0;
}


/*

Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerol�neas Argentinas
para ofrecerlos a sus clientes.
Se deber� ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicaci�n es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciar� y contar� con un men� de opciones:
1. Ingresar Kil�metros: ( km=x)
2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
- Precio vuelo Aerol�neas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de d�bito (descuento 10%)
b) Tarjeta de cr�dito (inter�s 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)
4. Informar Resultados
�Latam:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerol�neas:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r �
5. Carga forzada de datos
6. Salir

Aclaraciones del funcionamiento:
El men� se tiene que ver tal cual est� descrito en la consigna. Los resultados se tienen que
mostrar con el mismo formato. Se puede realizar un submen� para ingresar los km y los
precios.
Los resultados se tienen que ver con el formato presentado en el men�. De la siguiente
manera.

La carga forzada se tiene que mostrar exactamente igual a la pantalla de resultados sin ingresar
ninguna opci�n previamente. Tiene que calcular todo al momento de apretar el bot�n con los
siguientes datos:
Km: 7090
Aerolineas Argentinas: $162965
Latam: $ 159339
(solo mostrar los resultados ya calculados)
Se deben realizar todas las validaciones necesarias para que el programa funcione
correctamente. Por ej: no se puede realizar c�lculos si no hay vuelos ingresados.
Todas las funciones que realizar�n los c�lculos del men� se deber�n realizar en una biblioteca
aparte, que contenga las funciones para realizar todas las operaciones.
En el men� deber�n aparecer los valores actuales cargados en los vuelos de Latam y Aerolineas
(donde dice �x� e �y� en el ejemplo, se debe mostrar el n�mero cargado)
 */
