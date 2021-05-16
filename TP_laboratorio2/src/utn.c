/*
 * utn.c
 *
 *  Created on: 14 may. 2021
 *      Author: fonso
 */


#include "utn.h"

int getInt(char mensaje[]){

	int aux;

	printf(mensaje);
	scanf("%d",aux);

	return aux;
}

float getFloat(char mensaje[]){

	float aux;

	printf(mensaje);
	scanf("%f",aux);

	return aux;
}

char getChar(char mensaje[]){

	char aux;

	printf(mensaje);
	scanf("%c",aux);

	return aux;
}

void getString(char mensaje[],char *string){

	 printf("%s", mensaje);
	 __fpurge(stdin);
	 scanf("%s", string);

}
