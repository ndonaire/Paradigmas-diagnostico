#ifndef UTILITARIAS_H_INCLUDED
#define UTILITARIAS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define FIL 3
#define COL 4

void mostrarVector(int vec[] , int tam);
void mostrarMatriz(const int mat[][COL], int fi, int co);
int buscarPosPrimerMayor(int vec[], int ce);
int buscarMayor(int *vec, int ce);
int buscarValor(int *vec, int desde, int hasta, int val);
int buscarMayorModa(int vecVal[], int ceVal, int vecModa[],int posModa);


#endif // UTILITARIAS_H_INCLUDED
