/*
 * ArrayEmployees.c
 *
 *  Created on: 15 may. 2021
 *      Author: fonso
 */
#include "ArrayEmployees.h"

static int id = 0;

int menu(){

	int opcion;

	printf("1.-Alta\n");
	printf("2.-Modificar\n");
	printf("3.-Baja\n");
	printf("4.-Informar\n");
	printf("5.-Salir\n");
	opcion = getInt("Ingrese su opcion: \n");

	return opcion;
}



void initEmployees(Employee arrayEmployee[], int TAM){

	int i;
	for(i=0;i<TAM;i++){

		arrayEmployee[i].isEmpty = VACIO;
	}
}

int validateNumber(int numeroIngresado,int maximo, int minimo, char mensajeError[]){

	while(numeroIngresado > maximo || numeroIngresado < minimo){

		numeroIngresado = getInt(mensajeError);
	}

	return numeroIngresado;
}

int findFree(Employee arrayEmployee[],int TAM){

	int index;
	index = 0;
	int i;

	for(i=0;i<TAM;i++){

		if(arrayEmployee[i].isEmpty == VACIO){

			index = i;
			break;
		}
	}
	return index;
}

//ADD EMPLOYEE
int addEmployee(Employee arrayEmployee[],int TAM){
	char name[50];
	char Lastname[50];
	int index;
	float sueldo;
	int sector;

	index = findFree(arrayEmployee,TAM);

	if(index != 0)
	{

		arrayEmployee[index].id = id;
		id++;

		printf("Ingrese el nuevo nombre: \n");
		scanf("%s", name);
		arrayEmployee[index].name = name;

		printf("Ingrese el nuevo apellido: \n");
		scanf("%s", Lastname);
		arrayEmployee[id].name = Lastname;

		sueldo = getFloat("Ingrese sueldo : \n");
		arrayEmployee[id].salary = sueldo;

		sector = getInt("Ingrese el sector: \n");
		arrayEmployee[id].sector = sector;
	}
	return 1;
}

int loadId(){

	int id;
	int idValidado;
	id = getInt("Ingrese Id\n");

	idValidado = validateNumber(id,1000,0,"Error,ingrese nuevamente el id:\n");

	return idValidado;
}

int findEmployeeById(Employee arrayEmployee[],int TAM,int ID){

	int i;
	int index;
	i=0;

	for(i=0;i<TAM;i++){

		if(arrayEmployee[i].id == ID && arrayEmployee[i].isEmpty == VACIO){

			index = i;
		}
	}

	return index;
}

int removeEmployee(Employee arrayEmployee[],int TAM,int ID){


	int opcion;
	opcion = getInt("Esta seguro que desea borrar: 1.Si--2.No.\n");

	if(opcion == 1)
	{
		arrayEmployee[ID].isEmpty = VACIO;
	}else
	{
		printf("No se pudo borrar");
	}
	return 1;
}

int sortEmployee(Employee arrayEmployee[],int TAM, int order){

	int i;
	int j;
	int rtn = 0;
	Employee aux;
	switch(order){
			case 1:
				for (i = 0; i < TAM - 1; i++) {
					for (j = i + 1; j < TAM; j++) {
						if (arrayEmployee[i].isEmpty == OCUPADO
								&& arrayEmployee[j].isEmpty == OCUPADO) {
							if (arrayEmployee[i].sector > arrayEmployee[j].sector) {
								aux = arrayEmployee[i];
								arrayEmployee[i] = arrayEmployee[j];
								arrayEmployee[j] = aux;
							}
						}
					}
				}
				rtn = 1;
				break;
			case 2:
				for (i = 0; i < TAM - 1; i++) {
					for (j = i + 1; j < TAM; j++)
					{
						if (arrayEmployee[i].isEmpty == OCUPADO
								&& arrayEmployee[j].isEmpty == OCUPADO) {
							if (arrayEmployee[i].sector < arrayEmployee[j].sector){
								aux = arrayEmployee[i];
								arrayEmployee[i] = arrayEmployee[j];
								arrayEmployee[j] = aux;
							}
						}
					}
				}
				rtn = 1;
				break;

	}
	return rtn;
}

void printEmployee(Employee arrayEmployee){

	printf("id: %5d", arrayEmployee->id);
	printf("Nombre y apellido : %5s %5s",arrayEmployee->name, arrayEmployee->lastName);
	printf("Salario : %2.5f", arrayEmployee->salary);
	printf("Sector : %5d", arrayEmployee->sector);


}

int printAllEmployee(Employee arrayEmployee[],int TAM){

	int i;

	for(i=0;i<TAM;i++)
	{
		printEmployee(arrayEmployee[i]);
	}

	return 1;
}

int modifyEmployee(Employee arrayEmployee[],int TAM){

	int id;
	int idEmployee;
	int opcion;
	char name[50];
	char Lastname[50];
	float sueldo;
	int sector;
	idEmployee = getInt("Ingrese el ID a modificar : \n");

	id = findEmployeeById(arrayEmployee,TAM,idEmployee);

	opcion = getInt("Ingrese que quiere modificar 1.-Nombre\n 2.-Apellido\n 3.-Salario\n 4.-Sector\n");

	switch(opcion){

	case 1:
	printf("Ingrese el nuevo nombre: \n");
	scanf("%s", name);
	arrayEmployee[id].name = name;

	break;

	case 2:
		printf("Ingrese el nuevo nombre: \n");
		scanf("%s", Lastname);
		arrayEmployee[id].lastName = Lastname;
	break;

	case 3:
		sueldo = getFloat("Ingrese el nuevo sueldo: ");
		arrayEmployee[id].salary = sueldo;
	break;

	case 4:
		sector = getInt("Ingrese nuevo sector: ");
		arrayEmployee[id].sector = sector;
	break;


	}
return 1;
}
