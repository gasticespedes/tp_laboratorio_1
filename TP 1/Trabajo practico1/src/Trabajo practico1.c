/*
 ============================================================================
 Name        : Trabajo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main() {

   int opcion;
   int   numeroA;
   int   numeroB;
   int resultadoFinalSumar;
   int resultadoFinalRestar;
   int resultadoFinalMultiplicacion;
   float resultadoFinalDivision;
   int resultadoFinalFactorialA;
   int resultadoFinalFactorialB;
   if(validacionesInt ("Ingrese un numero ", "Error",&numeroA)== 0){

        if(validacionesInt ("Ingrese un numero ", "Error",&numeroB)== 0){

   do{
        printf("\n numero A = %d",numeroA);
        printf("\n numero B = %d", numeroB);
        printf("\n1. Suma\n2. Resta\n3. Multiplicar\n4. Dividir\n5. Factorial\n6. salir");
        printf("\n Elija una opcion : ");
        scanf("\n %d",&opcion);

        switch(opcion)
        {
        case 1 :
            suma(numeroA , numeroB,&resultadoFinalSumar);
            printf("El resultado de la suma es %d",resultadoFinalSumar);
            break;


        case 2 :
            resta (numeroA, numeroB,&resultadoFinalRestar);
            printf("\nEl resultado de la resta es %d", resultadoFinalRestar);
            break;

        case 3:
            multiplicar (numeroA,numeroB,&resultadoFinalMultiplicacion);
            printf("\nEl resultado de la multiplicacion es %d",resultadoFinalMultiplicacion);
            break;

        case 4:
            if(division (numeroA,numeroB,&resultadoFinalDivision)== 0){

            printf("\nEl resultado de la division es %f",resultadoFinalDivision);
            }
            else {

                printf("No se puede dividir por 0");
            }
            break;

        case 5:
            factorial (numeroA,&resultadoFinalFactorialA);
            factorial (numeroB, &resultadoFinalFactorialB);
            printf("\nEl resultado del factorial A es %d y de B %d",resultadoFinalFactorialA, resultadoFinalFactorialB);
            break;
        case 6:
            printf("Adios");
            break;
        }
   }while (opcion != 6);
    }
    else {
        printf("Vuelva a intentar");
    }
   }
   else {
    printf("Vuelva a intentar");
   }
   return EXIT_SUCCESS;
}


