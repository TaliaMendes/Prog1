#include<stdio.h>

int somaintervalo(int n1 , int n2){
int i , soma=0 ;
   
    if(n2<n1)
  { 
      for(i=n2 ; i<=n1 ; i++) 
      {
          soma = soma + i;
      }
  } 
   else if(n1<n2) 
   {
       for(i=n1 ; i<=n2 ; i++) 
      {
         soma = soma + i;
      }
  }
    
    
     return soma;
} 


int main (){
int n1 ,n2, result;

    printf("Digite o primeiro numero\n");
    scanf("%d",&n1);

    printf("Digite o segundo numero\n");
    scanf("%d",&n2);

    result = somaintervalo(n1,n2);

    printf("A soma de %d e %d e: %d\n",n1 , n2 , result);


         return 0;
}