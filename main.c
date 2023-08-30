#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

int main()
{
    ///EJERCICIO 1
    int mat[FIL][FIL] = {{1,2,3},{4,1,6},{7,8,2}}; // {{1}};
    printf("Ejercicio 01: %s", ejercicio_01(mat,COL)? "Lo comprueba\n": "No lo comprueba\n");
    puts("\n");

    ///EJERCICIO 2
    int mat2[FIL][COL] = {{1,2,3,5},{4,2,6,0},{7,8,2,1}};
    printf("Ejercicio 02: %s", ejercicio_02(mat2,FIL,COL)? "La multiplicacion da 0\n": "La multiplicacion NO da 0\n");
    puts("\n");

    ///EJERCICIO 3
    int mat3[FIL][COL] = {{8,2,-3,4},{5,-6,-6,20},{21,1,-5,0}};
    int mat4[FIL][COL];
    ejercicio_03(mat3,FIL,COL,mat4);
    printf("Ejercicio 03: \n");
    mostrarMatriz(mat4,FIL,COL);
    puts("\n");

    ///EJERCICIO 4
    int mat5[FIL][COL]={{1,2,3,4},{5,-6,-6,20},{1,1,10,10}};
    int matModas[FIL];
    ejercicio_04(mat5,FIL,COL,matModas);
    printf("Ejercicio 04: \n");
    mostrarVector(matModas,FIL);
    puts("\n");

    ///EJERCICIO 5
    int mat6[COL][COL]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matRes[2*COL-1][COL]= {0};
    ejercicio_05(mat6,COL,matRes);
    printf("Ejercicio 05: \n");
    mostrarMatriz(matRes,2*COL-1,COL);

    return 0;
}

