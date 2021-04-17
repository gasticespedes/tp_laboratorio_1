/*
 ============================================================================
 Name        : TP_Laboratorio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"


int main(void){

	int opcion;
	int numeroUno;
	int numeroDos;


	int resultadoSuma;
	int resultadoResta;
	float resultadoDivision;
	int resultadoMultiplicacion;
	int resultadoFactorial;
	int resultadoFactorialDos;


	printf("1. Ingrese primer operando (A = x)\n");

	printf("\n2. Ingrese un segundo operando (B = y)\n");

	printf("\n3.Calcular todas las operaciones.\n"
			"a)Calcular la suma (A+B)\n"
			"b)Calcular la resta (A-B)\n"
			"c)Calcular la division (A/B)\n"
			"d)Calcular la multiplicacion (A*B)\n"
			"e)Calcular el factorial(A!)\n");

	printf("\n4.Informar los resultados :\n"
			"El resultado de A+B = r\n"
			"El resultado de A-B = r\n"
			"El resultado de A/B = r\n"
			"El resultado de A*B = r\n"
			"El factorial de A es: r1 y el factorial de B es :r2\n");

	printf("\n5.Salir\n");
	do{

	printf("\nPor favor seleccione otra opción: \n");
	scanf("%d",&opcion);

	switch(opcion){
	case 1:

		numeroUno=DatoIngresado("Primer operando...");

	break;

	case 2:
		numeroDos=DatoIngresado("Segundo operando...");

	break;

	case 3:


	resultadoSuma = Suma(numeroUno,numeroDos);
	resultadoResta = Resta(numeroUno,numeroDos);
	resultadoDivision = Division(numeroUno,numeroDos);
	resultadoMultiplicacion = Multiplicacion(numeroUno,numeroDos);
	resultadoFactorial = Factorial(numeroUno);
	resultadoFactorialDos = Factorial(numeroDos);



	break;

	case 4:
		MostrarResultado(resultadoSuma,resultadoResta,resultadoDivision,
				resultadoMultiplicacion,resultadoFactorial,
				resultadoFactorialDos);

	break;

	case 5:
	break;

	case 6:
	break;

	default:

		printf("\nLa opcion ingresada no es correcta,ingrese nuevamente\n");

	break;
	}

	}while(opcion != 5);

}
