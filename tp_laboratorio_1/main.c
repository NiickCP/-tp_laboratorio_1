#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"
int main()
{
    char continuar = 's';
    int numA=0;
    int numB=0;
    int opcion;
    int resultado;

    while(continuar=='s')
    {
        printf("\n------ C A L C U L A D O R A ------\n   A=%d              B=%d        \n1-Ingresar 1er operando\n2-Ingresar 2do operando\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Salir\n Opcion = ",numA,numB);
        scanf("%d",&opcion);
        system("cls");
        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer operando: ");
                scanf("%d",&numA);
                system("cls");
                break;
            case 2:
                printf("Ingrese el segundo operando: ");
                scanf("%d",&numB);
                system("cls");
                break;
            case 3:
                resultado=suma(numA,numB);
                printf("El resultado de %d + %d es %d",numA,numB,resultado);
                break;
            case 4:
                resultado=resta(numA, numB);
                printf("El resultado de %d - %d es %d",numA,numB,resultado);
                break;
            case 5:
                comprobanteDeDivision(numA, numB);
                break;
            case 6:
                resultado=numA*numB;
                printf("El resultado de %d * %d es %d",numA,numB,resultado);
                break;
            case 7:
                resultado=factorial(numA);
                printf("El factorial de %d es: %d ",numA,resultado);
                resultado=factorial(numB);
                printf("y El factorial de %d es: %d",numB,resultado);
                break;
            case 8:
                continuar='n';
                break;
            default:
                printf("Opcion ingresa es incorrecta ");
        }
    }
    return 0;
}
