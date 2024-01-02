#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMLINHA 3
#define NUMCOLUNA 4


void multiplicamatriz(int matriz[NUMLINHA][NUMCOLUNA]){
     long int mult=1;
    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            mult = mult * matriz[i][j];
            
         }

    }
       printf("A multiplicação dos valores e:%d\n",mult);

}


void somamatriz(int matriz[NUMLINHA][NUMCOLUNA]){
    int soma=0;

    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            soma = soma + matriz[i][j];
         }

    }
       printf("A soma dos valores e:%d\n", soma);
}


void imprimimatriz(int matriz[NUMLINHA][NUMCOLUNA]){

    srand(time(NULL));

    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            printf("Elementos[%d][%d]= %d\n",i+1,j+1,matriz[i][j] = rand() %9+1);
         }
    }
}


int main(){
    int matriz[NUMLINHA][NUMCOLUNA];

    imprimimatriz(matriz);

    somamatriz(matriz);

    multiplicamatriz(matriz);


    return 0;
}