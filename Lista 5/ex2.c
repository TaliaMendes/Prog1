#include<stdio.h>

int main(){
int vetor[20], vetAux[20] , menoresmedia[20];
float mediavet, somamedia;

   
    for(int i=0 ; i<20 ; i++)
     {
       printf("Digite 20 numeros\n");
       scanf("%d",&vetor[i]);
         
          if(vetor[i] <0) 
           {     
              printf("Digite numeros positivos\n");
              scanf("%d",&vetAux[i]);
           }
        
            else
            {
                vetAux[i] = vetor[i];
            }
    
        
      }
     
    
    for(int i=0 ; i<20 ; i++)
     {
        somamedia += vetAux[i];
     }
    mediavet = somamedia/20;
    
    
    for(int i=0 ; i<20 ; i++)
    {
      if (vetAux [i] < mediavet)
        {
            printf("Os valores abaixo da media são:%d\n",vetAux[i]);
        }
    
     } 
    
    
   printf("media %.2f\n",mediavet);
    
     return 0;   
}