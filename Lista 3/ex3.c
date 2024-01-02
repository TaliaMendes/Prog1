#include<stdio.h>

int main()
{int numero=0, tabuada;
 int i;    
  
       printf("Digite um numero:\n");
       scanf("%d",&numero);
                  
    
    
     for(i=0 ; i<=10 ; i++)
     {    
        tabuada = i * numero;
       printf("%d * %d = %d \n", i , numero,tabuada);
    
     }    
     
         
                          
    
     return 0;
}