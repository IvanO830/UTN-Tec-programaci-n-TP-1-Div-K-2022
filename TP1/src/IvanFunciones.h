/*
 * IvanFunciones.h
 */

#ifndef IVANFUNCIONES_H_
#define IVANFUNCIONES_H_


/**
 * @brief Ingresando un valor y el porcentaje que se le desea descontar, retorna el valor ya descontado.
 *
 * @param Número ingresado
 * @param Porcentaje a descontar
 * @return Número descontado
 */
float descuentoCalculadora (float, float);

/**
 * @brief Ingresando un valor y el porcentaje que se le desea agregar, retorna el valor con intereses.
 *
 * @param Número ingresado
 * @param Porcentaje a descontar
 * @return Número con interés
 */
float interesCalculadora (float, float);

/**
 * @brief Ingresando el dividendo y el divisor se retorna el resultado de la división.
 *
 * @param Dividendo
 * @param Divisor
 * @return División
 */
float divisor (float, float);

/**
 * @brief Ingresando dos números distintos entre sí se compara según cual sea el mayor de estos valores y retorna la diferencia entre ellos.
 *
 * @param Número ingresado 1
 * @param Número ingresado 2
 * @return	Diferencia
 */
float diferencia ( int, int);

/**
 * @brief Ingresando un valor a validar junto al minimo y un maximo del parametro en el que tiene que encontrarse este valor, retorna el valor ingresado si es valido.
 *
 * @param Número ingresado
 * @param Minimo
 * @param Maximo
 * @return	Número validado
 */
float validadorDatos(int , int, int );


#endif /* IVANFUNCIONES_H_ */
