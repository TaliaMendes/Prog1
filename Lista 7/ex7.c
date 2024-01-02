#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMLINHA 3
#define NUMCOLUNA 6

void multiplicamatriz(int matriz[NUMLINHA][NUMCOLUNA]){
    int valor;


    printf("Digite um valor para ser multiplicado na matriz\n");
    scanf("%d", &valor);


    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            matriz[i][j] = matriz[i][j] * valor;
         }
    }
    printf("Matriz multiplicada:\n");
    imprimimatriz(matriz);
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

    multiplicamatriz(matriz);

    

    return 0;
}