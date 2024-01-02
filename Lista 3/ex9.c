#include <stdio.h>

int main()
{ int num, i , atual=1 , anterior=0 , fib=0;


    printf("Digite um numero\n");
    scanf("%d",&num);
    
    for(i=1 ; i<num ; i++)
     { 
        fib = anterior + atual;
        anterior = atual;
        atual = fib;
    }  
    
   printf("%d\n",atual);     
         
                 
         return 0;
}