/*
 * operaciones.c
 *
 *  Created on: 16 abr. 2021
 *      Author: fonso
 */
#include "operaciones.h"


int Suma (int numeroUno,int numeroDos)
{

	int resultadoSuma;

	resultadoSuma = numeroUno + numeroDos;

	return resultadoSuma;
}

int DatoIngresado(char string[]){

	int resultado;
	printf("%s",string);
	scanf("%d",&resultado);

	return resultado;
}

int Resta (int numeroUno, int numeroDos)
{

	int resultadoResta;

	resultadoResta = numeroUno - numeroDos;

	return resultadoResta;
}

float Division(int numeroUno, int numeroDos)
{

	float resultadoDivision;

	if(numeroDos == 0){


		resultadoDivision = 0;

	}else{


		resultadoDivision = (float)numeroUno / numeroDos;

	}

	return resultadoDivision;
}

int Multiplicacion(int numeroUno, int numeroDos)
{
	int resultadoMultiplicacion;

	resultadoMultiplicacion = numeroUno * numeroDos;

	return resultadoMultiplicacion;

}

int Factorial(int numeroUno){

	int i;
	int resultadoFactorial;
	resultadoFactorial = 1;

	for(i=1;i<=numeroUno;i++){

		resultadoFactorial = resultadoFactorial*i;
	}
	return resultadoFactorial;
}

void MostrarResultado(int resultadoSuma,int resultadoResta,float resultadoDivision,
		int resultadoMultiplicacion, int resultadoFactorial,int resultadoFactorialDos){

	if(resultadoDivision != 0){
	printf("El resultado de A+B = %d\n"
			"El resultado de A-B = %d\n"
			"El resultado de A/B = %.2f\n"
			"El resultado de A*B = %d\n"
			"El factorial de A es: %d y el factorial de B es :%d\n",resultadoSuma,
		    resultadoResta,resultadoDivision,resultadoMultiplicacion,resultadoFactorial,
			resultadoFactorialDos);
	} else
	{
		printf(	"El resultado de A+B = %d\n"
				"El resultado de A-B = %d\n"
				"El resultado de A/B = No es divisible por 0\n"
				"El resultado de A*B = %d\n"
				"El factorial de A es: %d y el factorial de B es :%d\n",resultadoSuma,
				    resultadoResta,resultadoMultiplicacion,resultadoFactorial,
					resultadoFactorialDos);

	}
}
