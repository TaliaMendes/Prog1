#include<stdio.h>

void alteraVetor(int vetor[6]){
    
    vetor[0] = 6;
    vetor[4] = 2;
    vetor[2] = 4;
    vetor[3] = 10;
    vetor[1] = 8;
    vetor[5] = 12;

    return 0;
}


int main(){
int vetor[6]; 
    for(int i=0 ; i<6 ; i++)
    {
       printf("Digite 6 valores\n");
       scanf("%d",&vetor[i]);        
    }
    
    for(int i=0 ; i<6 ; i++)
    {
        printf("Os valores contidos no vetor sao:%d\n",vetor[i]);
    }   
    
    
    alteraVetor(&vetor);
    
      for(int i=0 ; i<6 ; i++)
    {
        printf("Os novos valores contidos no vetor sao:%d\n",vetor[i]);
    }
    
     return 0;
 }