/*
 * IvanFunciones.c
 *
 *  Created on: 11 abr. 2022
 *      Author: admin
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Ingresando un valor y el porcentaje que se le desea descontar, retorna el valor ya descontado.
 *
 * @param N�mero ingresado
 * @param Porcentaje a descontar
 * @return N�mero descontado
 */
float descuentoCalculadora (float numeroIngresado, float porcentajeDescontado)
{
	float retorno;
	retorno = numeroIngresado - ((numeroIngresado * porcentajeDescontado) / 100);

	return retorno;
}

/**
 * @brief Ingresando un valor y el porcentaje que se le desea agregar, retorna el valor con intereses.
 *
 * @param N�mero ingresado
 * @param Porcentaje a descontar
 * @return N�mero con inter�s
 */
float interesCalculadora (float numeroIngresado, float porcentajeInteres)
{
	float retorno;
	retorno = numeroIngresado + ((numeroIngresado * porcentajeInteres) / 100);

	return retorno;
}

/**
 * @brief Ingresando el dividendo y el divisor se retorna el resultado de la divisi�n.
 *
 * @param Dividendo
 * @param Divisor
 * @return Divisi�n
 */
float divisor (float numeroIngresado1, float numeroIngresado2)
{
	float retorno;
	retorno = numeroIngresado1 / numeroIngresado2;

	return retorno;
}

/**
 * @brief Ingresando dos n�meros distintos entre s� se compara seg�n cual sea el mayor de estos valores y retorna la diferencia entre ellos.
 *
 * @param N�mero ingresado 1
 * @param N�mero ingresado 2
 * @return	Diferencia
 */
float diferencia (int numeroIngresado1, int numeroIngresado2)
{
	float retorno;

	if(numeroIngresado2 > numeroIngresado1)
	{
		retorno = numeroIngresado2 - numeroIngresado1;
		//printf("numeroIngresado2 > numeroIngresado1 = numeroIngresado1 %d numeroIngresado2 %d retorno %f", numeroIngresado1, numeroIngresado2, retorno);
	}
		else
		{
			retorno = numeroIngresado1 - numeroIngresado2;
			//printf("numeroIngresado1 > numeroIngresado2 = numeroIngresado1 %d numeroIngresado2 %d retorno %f", numeroIngresado1, numeroIngresado2, retorno);
		}

	return retorno;
}

/**
 * @brief Ingresando un valor a validar junto al minimo y un maximo del parametro en el que tiene que encontrarse este valor, retorna el valor ingresado si es valido.
 *
 * @param N�mero ingresado
 * @param Minimo
 * @param Maximo
 * @return	N�mero validado
 */
float validadorDatos(int Minimo, int Maximo, int NumeroIngresado) //Validador de datos dentro de un rango
{
	float NumeroRetornado;

	if( Maximo < Minimo || Minimo == Maximo ) //Detectar si el rango tiene sentido
	{
		printf("El rango que determin� era ilogico.");
		return 0;
	}

	if( NumeroIngresado > Minimo && NumeroIngresado < Maximo) //Detectar si el numero est� dentro del rango deseado
	{
		if(NumeroIngresado == 0)
			{
				NumeroRetornado = NumeroIngresado + 0.25;
			}
			else
			{
				NumeroRetornado = NumeroIngresado;
			}

		return NumeroRetornado;
	}
		else
		{
			printf("El n�mero que ingres� no estaba dentro del rango que determin�.");
			return 0;
		}

}
