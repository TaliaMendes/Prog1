#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMLINHA 4
#define NUMCOLUNA 4


void imprimimenor(int matriz[NUMLINHA][NUMCOLUNA]){
     int menor,linhaMenor,colunaMenor;

    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
        {
            if(matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }

    }
       printf("O menor dos valores e:%d, na linha : %d e coluna: %d\n",menor,linhaMenor,colunaMenor);
}


void imprimimaior(int matriz[NUMLINHA][NUMCOLUNA]){
    int maior ,linhaMaior,colunaMaior;

    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            if(matriz[i][j]>maior)
            {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;

            }
         }

    }
   printf("O maior dos valores e:%d, na linha : %d e coluna: %d\n",maior,linhaMaior,colunaMaior);
}



void imprimimatriz(int matriz[NUMLINHA][NUMCOLUNA]){

    printf("[");

    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            if(j == 0 && i != 0)
                printf(" %d,", matriz[i][j]);
            else if(i==NUMLINHA-1 && j == NUMCOLUNA-1)
                printf("%d]", matriz[i][j]);
            else
                printf("%d,", matriz[i][j]);
       
          }
         printf("\n");
    }
}


void preencheMatriz(int matriz[NUMLINHA][NUMCOLUNA]) {

    srand(time(NULL));
    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            matriz[i][j] = rand() %9+1;
         }
    }
}
int main(){
    int matriz[NUMLINHA][NUMCOLUNA];

    preencheMatriz(matriz);
    
    imprimimatriz(matriz);

    imprimimaior(matriz);

    imprimimenor(matriz);


    return 0;
}