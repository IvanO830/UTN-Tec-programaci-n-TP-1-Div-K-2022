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
 * @param Número ingresado
 * @param Porcentaje a descontar
 * @return Número descontado
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
 * @param Número ingresado
 * @param Porcentaje a descontar
 * @return Número con interés
 */
float interesCalculadora (float numeroIngresado, float porcentajeInteres)
{
	float retorno;
	retorno = numeroIngresado + ((numeroIngresado * porcentajeInteres) / 100);

	return retorno;
}

/**
 * @brief Ingresando el dividendo y el divisor se retorna el resultado de la división.
 *
 * @param Dividendo
 * @param Divisor
 * @return División
 */
float divisor (float numeroIngresado1, float numeroIngresado2)
{
	float retorno;
	retorno = numeroIngresado1 / numeroIngresado2;

	return retorno;
}

/**
 * @brief Ingresando dos números distintos entre sí se compara según cual sea el mayor de estos valores y retorna la diferencia entre ellos.
 *
 * @param Número ingresado 1
 * @param Número ingresado 2
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
 * @param Número ingresado
 * @param Minimo
 * @param Maximo
 * @return	Número validado
 */
float validadorDatos(int Minimo, int Maximo, int NumeroIngresado) //Validador de datos dentro de un rango
{
	float NumeroRetornado;

	if( Maximo < Minimo || Minimo == Maximo ) //Detectar si el rango tiene sentido
	{
		printf("El rango que determinó era ilogico.");
		return 0;
	}

	if( NumeroIngresado > Minimo && NumeroIngresado < Maximo) //Detectar si el numero está dentro del rango deseado
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
			printf("El número que ingresó no estaba dentro del rango que determinó.");
			return 0;
		}

}
