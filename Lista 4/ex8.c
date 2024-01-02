#include<stdio.h>

int fibonacci(int num){
 int fib=0 , anterior=0, atual=1;
 
    for(int i=1 ; i<num ; i++)
     { 
        fib = anterior + atual;
        anterior = atual;
        atual = fib;
     }  
     
    return atual;
} 


int main ()
{ int num , result;

    printf("Digite um numero\n");
    scanf("%d", &num);
    
    result = fibonacci(num);
    
    printf("%d \n",result);
    
     return 0;   
}