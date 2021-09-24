/*
 * funciones.c
 *
 *  Created on: 24 sep. 2021
 *      Author: Gasto
 */


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Valida los numeros ingresados
 *
 * \param Muestra el mensaje a ingresar
 * \param Muestra el mensaje de error
 * \param Muestra el puntero resultado
 * \param muestra la cantidad de reintento
 * \return
 *
 */
int validacionesInt(char* mensaje, char* mensajeError, int* pResultado){
    int retorno = -1;
    int bufferInt;
    int resultadoScanF;
    if(mensaje != NULL && mensajeError != NULL && pResultado != NULL )
        	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			resultadoScanF = scanf("%d",&bufferInt);
			if(resultadoScanF == 1)
			{
				retorno = 0;
				*pResultado = bufferInt;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				fflush(stdin);

			}
		}
		while(retorno == -1);
	}
	return retorno;
}
/** \brief Suma los numeros ingresados
 *
 * \param El primer numero a sumar
 * \param El segundo numero a sumar
 * \param El resultado final de la suma
 *
 * \return
 *
 */
int suma(int primerNumero, int segundoNumero, int* resultadoSuma)
{
    	int retorno = -1;

	if(resultadoSuma != NULL)
	{
		*resultadoSuma = (primerNumero + segundoNumero);
		retorno = 0;
	}
	return retorno;
}
/** \brief Resta los numeros ingresados
 *
 * \param El primer numero a restar
 * \param El segundo numero a restar
 * \param El resultado final de la resta
 *
 * \return
 *
 */
int resta(int primerNumero, int segundoNumero, int* resultadoResta)
{
    	int retorno = -1;

	if(resultadoResta != NULL )
	{
		*resultadoResta = (primerNumero - segundoNumero);
		retorno = 0;
	}
	return retorno;
}
/** \brief Multiplica los numeros ingresados
 *
 * \param El primer numero a multiplicar
 * \param El segundo numero a multiplicar
 * \param El resultado final de la multiplicacion
 *
 * \return
 *
 */
int multiplicar(int primerNumero, int segundoNumero, int* resultadoMultiplicar)
{
    	int retorno = -1;

	if(resultadoMultiplicar != NULL )
	{
		*resultadoMultiplicar = (primerNumero * segundoNumero);
		retorno = 0;
	}
	return retorno;
}
/** \brief divide los numeros ingresados
 *
 * \param El primer numero ingresado el cual se le va a dividir el segundo
 * \param El segundo numero ingresado que va a dividir el primero
 * \param El resultado final de la division
 *
 * \return
 *
 */

float division(int primerNumero, int segundoNumero, float* resultadoDivision)
{
    	int retorno = -1;

	if(resultadoDivision != NULL && segundoNumero != 0)
	{
		*resultadoDivision = ((float)primerNumero / segundoNumero);
		retorno = 0;
	}
	return retorno;
}
/** \brief saca la factorizacion de un numero
 *
 * \param El numero a factorizar
 * \param El resultado del numero factorizado
 *
 * \return
 *
 */
int factorial(int PrimerNumero,int* resultadoFactor)
{

	int resultadoFactorial=1;
	int repeticiones;
	int retorno = -1;

	if(resultadoFactor!=NULL && PrimerNumero>-1)
	{
		if(PrimerNumero!=0)
		{
			for(repeticiones=PrimerNumero; repeticiones>1; repeticiones--)
			{
				resultadoFactorial=resultadoFactorial*repeticiones;
			}
			retorno = 0;
		}
		else
		{
			resultadoFactorial=1;
			retorno = 0;
		}
	}

	*resultadoFactor=resultadoFactorial;
	return retorno;
}

