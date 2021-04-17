/*
 * operaciones.h
 *
 *  Created on: 16 abr. 2021
 *      Author: fonso
 */
#include <stdio_ext.h>
#ifndef OPERACIONES_H_
#define OPERACIONES_H_

int DatoIngresado(char[]);/** \brief Ingresa los datos
 *
 * \param char El texto que se va a ingresar
 * \return int retorna el resultado que quiere el usuario
 *
 */

int Suma(int,int);/** \brief Ingresa dos numeros y los suma
 *
 * \param int Primer numero a sumar
 * \param int Segundo numero a sumar
 * \return int Retorna el valor de los numeros sumados
 *
 */
int Resta(int,int);/** \brief Ingresa dos numeros y los resta
 *
 * \param int Primer numero ingresado
 * \param int Segundo numero ingresado a restar
 * \return int Retorna el valor total de los numeros restados entre si
 *
 */
float Division(int,int);/** \brief Ingresa dos numeros y los divide
 *
 * \param int Ingresa el dividendo
 * \param int Ingresa el divisor
 * \return int Retorna el valor del cociente del dividendo y el divisor
 *
 */
int Multiplicacion(int,int);/** \brief Ingresa dos numeros y los multiplica
 *
 * \param int Primer numero a multiplicar
 * \param int Segundo numero a multiplicar
 * \return int Retorna el valor de los numeros multiplicados
 *
 */
int Factorial(int);/** \brief Ingresa un numero y calcula su factorial
 *
 * \param int Primer numero para calcular su factorial
 * \return int Retorna el valor del factorial del numero ingresado
 *
 */

void MostrarResultado(int,int,float,int,int,int);/** \brief Muestra el resultado de
las operaciones
 * \param int el resultado de la suma
 * \param int el resultado de la resta
 * \param float el resultado de la division
 * \param int el resultado de la multiplicacion
 * \param int el resultado del factorial
 *  \param int el resultado del factorial del segundo numero
 * \return int Retorna el resultado por escrito de todas las operaciones
 *
 */



#endif /* OPERACIONES_H_ */
