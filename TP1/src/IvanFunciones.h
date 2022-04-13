/*
 * IvanFunciones.h
 */

#ifndef IVANFUNCIONES_H_
#define IVANFUNCIONES_H_


/**
 * @brief Ingresando un valor y el porcentaje que se le desea descontar, retorna el valor ya descontado.
 *
 * @param N�mero ingresado
 * @param Porcentaje a descontar
 * @return N�mero descontado
 */
float descuentoCalculadora (float, float);

/**
 * @brief Ingresando un valor y el porcentaje que se le desea agregar, retorna el valor con intereses.
 *
 * @param N�mero ingresado
 * @param Porcentaje a descontar
 * @return N�mero con inter�s
 */
float interesCalculadora (float, float);

/**
 * @brief Ingresando el dividendo y el divisor se retorna el resultado de la divisi�n.
 *
 * @param Dividendo
 * @param Divisor
 * @return Divisi�n
 */
float divisor (float, float);

/**
 * @brief Ingresando dos n�meros distintos entre s� se compara seg�n cual sea el mayor de estos valores y retorna la diferencia entre ellos.
 *
 * @param N�mero ingresado 1
 * @param N�mero ingresado 2
 * @return	Diferencia
 */
float diferencia ( int, int);

/**
 * @brief Ingresando un valor a validar junto al minimo y un maximo del parametro en el que tiene que encontrarse este valor, retorna el valor ingresado si es valido.
 *
 * @param N�mero ingresado
 * @param Minimo
 * @param Maximo
 * @return	N�mero validado
 */
float validadorDatos(int , int, int );


#endif /* IVANFUNCIONES_H_ */
