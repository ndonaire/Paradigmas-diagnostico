#include "utilitarias.h"

void mostrarMatriz(const int mat[][COL], int fi, int co)
{
    int i,j;
    for (i=0;i<fi;i++)
    {
        for(j=0;j<co;j++)
        {
            printf("%4d",mat[i][j]);
        }
        printf("\n");
    }
}

void mostrarVector (int* vec, int tam)
{
    int i;
    for(i=0;i<tam;i++)
        printf("%d - ",vec[i]);
    printf("\n");
}

///Funciones adicionales de ejercicio_04
int buscarPosPrimerMayor(int vec[], int ce)
{
    int m,i, pos;
    for(i=0;i<ce;i++)
    {
        if(i == 0 || vec[i] > m)
        {
            m = vec[i];
            pos = i;
        }

    }
    return pos;
}

int buscarMayor(int vec[], int ce)
{
    int m,i;
    for(i=0;i<ce;i++)
    {
        if(i == 0 || vec[i] > m)
            m = vec[i];
    }
    return m;
}


int buscarValor(int *vec, int desde, int hasta, int val)
{
    int j = desde;
    while(j <= hasta)
    {
        if(*(vec+j) == val)
            return 1;
        j++;
    }
    return 0;
}

int buscarMayorModa(int vecVal[], int ceVal, int vecModa[],int posModa)
{
    int mayorModa = vecModa[posModa];
    int valMayorModa = vecVal[posModa];
    int i;
    for(i=0;i<ceVal;i++)
    {
        if(vecVal[i] > valMayorModa && vecModa[i] == mayorModa)
            valMayorModa = vecVal[i];
    }
    return valMayorModa;
}
