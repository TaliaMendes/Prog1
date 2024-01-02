#include<stdio.h>

int main(){
int vetor[20] , menor , maior=0 , posicaomaior, posicaomenor; 
    
    for(int i=0 ; i<20 ; i++)
    {
       printf("Digite 20 valores\n");
       scanf("%d",&vetor[i]);    
   
       if(vetor[i]<menor)
          {
             menor = vetor[i];
             posicaomenor = i;
          }
    
       else if(vetor[i]>maior)
          {
             maior = vetor[i];
             posicaomaior = i;
          }
    }
    
    printf(" O maior numero e %d , situado no indice %d \n", maior , posicaomaior);
       
    printf(" O menor numero e %d , situado no indice %d \n", menor , posicaomenor);
   
    
    
         return 0;   
}