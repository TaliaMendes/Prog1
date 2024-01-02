#include<stdio.h>

int main(){
int vet1[10], vet2[10] , vetresult[10];

    for(int i=0 ; i<10 ; i++)
    {
       printf("Digite 10 valores para o primeiro vetor\n");
       scanf("%d",&vet1[i]);    
    }
    
    for(int i=0 ; i<10 ; i++)
    {
       printf("Digite 10 valores para o segundo vetor\n");
       scanf("%d",&vet2[i]);
    }
   
     for(int i=0 ; i<10 ; i++)
    {
      vetresult[i] = vet1[i] * vet2[i];
      printf("A multiplicação de %d e %d é %d\n",vet1[i],vet2[i],vetresult[i]);
    
    }    
     
    
    
    
    
 

     return 0;   
}