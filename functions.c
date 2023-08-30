#include "functions.h"

bool ejercicio_01 (int mat[][FIL], int colum)
{
    int i;
    int sum = 0;
    for(i= 0; i<colum-1; i++)
    {
      sum+= mat[i][i];
      if(sum != mat[i+1][i+1]){
         return false;
      }
    }
    return true;
}

bool ejercicio_02 (int mat[][COL], int fila, int colum)
{
    int i,j;
    for(i= 0; i<fila; i++){
      for(j= 0; j<colum; j++)
      if(mat[i][j]== 0){

          return false;
      }
    }
    return true;
}

void ejercicio_03 (int mat[][COL], int fila, int colum, int matRes[][COL])
{
    int sum;
    int i,j;
    for(i=0; i<fila;i++)
    {
        for(j=0; j<colum;j++)
        {
            sum = 0;
            sum+= mat[i][j];
            if(j-1 >= 0) //arriba
            {
                sum+=mat[i][j-1];
            }
            if(j+1 < colum) //abajo
            {
                sum+=mat[i][j+1];
            }
            if(i-1 >= 0) //izquierda
            {
                sum+=mat[i-1][j];
            }
            if(i+1 < fila) //derecha
            {
                sum+=mat[i+1][j];
            }
            matRes[i][j]=sum;
        }


    }
}

int * ejercicio_04 (int mat[][COL], int fila, int colum, int modas[])
{
    int i,j,k,val,posMayorModa;
    int moda[colum];
    int valores[colum];
    //completo vector moda
    for(i= 0; i<fila; i++){
        for(j= 0; j<colum; j++){
            moda[j]=0;
            val = mat[i][j];
            if(!buscarValor(valores,0,j,val))
            {
                valores[j] = val;
                for(k= j; k<colum; k++){
                    if(val == mat[i][k])
                    moda[j]++;
                }
            }
        }
        //busco mayor valor de moda
        posMayorModa = buscarPosPrimerMayor(moda,colum);
        modas[i] = buscarMayorModa(valores,colum,moda,posMayorModa);
    }
    return modas;
}


int * ejercicio_05 (int mat[][COL],int colum, int matRes[][COL])
{
    int i,j;
    int resultCol, resultRow = 0;
    //diagonales inferiores
    for(i =colum-1;i>=0;i--){
        resultCol = 0;
        for(j=0;j<colum && i + j < colum;j++){
            matRes[resultRow][resultCol] = mat[i+j][j];
            resultCol++;
        }
        resultRow++;
    }
     //diagonales superiores
    for(j = 1;j < colum; j++){
        resultCol = 0;
        for(i=0;i<colum && i + j < colum;i++){
            matRes[resultRow][resultCol] = mat[i][i+j];
            resultCol++;
        }
        resultRow++;
    }
    return 0;
}




