#include "operaciones.h"
#include <stdio.h>
int suma(int numX, int numY)
{
    int result;
    result=numX+numY;
    return result;
}
int resta(int numA,int numB)
{
    int result;
    result=numA-numB;
    return result;
}
int multiplicacion(int numA,int numB)
{
    int result;
    result=numA*numB;
    return result;
}
int division(int numA,int numB)
{
    int result;
    result=numA/numB;
    return result;

}
int factorial(int num)
{
    int fact=1;
    for(int i=num;i>1;i--)
        fact=fact*num;
    return fact;
}
void comprobanteDeDivision(int numA, int numB)
{
    int resultado;
    if(numB!=0)
    {
        resultado=division(numA, numB);
        printf("El resultado de %d / %d es %d",numA,numB,resultado);
    }
        else
        {
            printf("ERROR : No se puede dividir por 0. \n\n");
        }
}
