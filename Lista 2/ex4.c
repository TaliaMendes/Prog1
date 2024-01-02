#include <stdio.h>
int main()
{int num; 

    printf("Digite um numero qualquer \n");
    scanf("%d",&num);    
     
     
    if(num >= 0 && num<10)
    {
        printf("O numero digitado esta entre 0 e 10");
    }  
        
     else if(num >= 10 && num<100)
    {
        printf("O numero digitado esta entre 10 e 100");
    }   
        
    else if(num >= 100 && num<1000)    
    {
        printf("O numero digitado esta entre 100 e 1000");
    }    
        
    else if(num >= 1000 && num<=10000) 
    {
         printf("O numero digitado esta entre 1000 e 10000");
    }  
        
     else 
    {
        printf("Não pertence a nenhum dos intervalos");
    }
         return 0;
}