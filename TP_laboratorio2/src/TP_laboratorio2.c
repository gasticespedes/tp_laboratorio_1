/*
 ============================================================================
 Name        : TP_laboratorio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio_ext.h>
#include <string.h>

#include "ArrayEmployees.h"
#include "utn.h"

#define TAM 1000

int main(void) {

	int opcion;
	int idRemove;
	int idBorrar;
	Employee arrayEmployees[TAM];

	initEmployees(arrayEmployees,TAM);

	opcion = menu();

	do{

		switch(opcion){

		case 1:

			if(addEmployee(arrayEmployees,TAM) != 0){

				printf("Cargado");
			}else{
				printf("Error");
			}
		break;

		case 2:

			if(modifyEmployee(arrayEmployees,TAM)!=0){
				printf("Modificacion exitosa");
			}else{
				printf("Error");
			}
		break;

		case 3:
			idRemove = getInt("Ingrese el id a borrar");
			idBorrar = findEmployeeById(arrayEmployee[],TAM,idRemove);

			if(removeEmployee(arrayEmployees,TAM,idBorrar)!=0){

				printf("Producto eliminado");

			}else{
				printf("Error");
			}

		}

		case 4:

			sortEmployee(arrayEmployees,TAM,1);
			if(PrintAllEmployee(arrayEmployees,TAM)!=0)
			{
				printf("Finalizado\n");
			}
		break;

	}while(opcion != 0);


	return EXIT_SUCCESS;
}
