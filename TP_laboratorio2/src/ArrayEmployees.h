/*
 * ArrayEmployees.h
 *
 *  Created on: 14 may. 2021
 *      Author: fonso
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

#define VACIO 0
#define OCUPADO 1

typedef struct{

	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;

}Employee;

int menu(void);

int increaseId ();

void initEmployees(Employee arrayEmployee[], int TAM);

int validateNumber(int numeroAValidar,int maximo,int minimo,char mensaje[]);

int findFree(Employee arrayEmployee[],int TAM);

int addEmployee(Employee arrayEmployee[],int TAM);

int loadId();

int findEmployeeById(Employee arrayEmployee[],int TAM,int ID);

int removeEmployee(Employee arrayEmployee[],int TAM,int ID);

int sortEmployee(Employee arrayEmployee[],int TAM, int order);//oreden 1 para mayor a menor y 2 menor a mayor

void printEmployee(Employee arrayEmployee);

int printAllEmployee(Employee arrayEmployee[],int TAM);

int modifyEmployee(Employee arrayEmployee[],int TAM);
#endif /* ARRAYEMPLOYEES_H_ */
