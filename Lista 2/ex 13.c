#include<stdio.h>

int main()
{float nota; 
     
    
     printf("Digite uma nota de 1 a 10\n");
     scanf("%f",&nota);
        
    if(nota>=9 && nota<=10)
    {
        printf("Equivale ao conceito A");
    }
    
    else if(nota>=7 && nota<=8.9)
    {
        printf("Equivale ao conceito B");
  
    }
    
    else if(nota>=5 && nota<=8.9)
    {
        printf("Equivale ao conceito C");
  
    }
    
    else if(nota < 5) 
    {
        printf("Equivale ao conceito D");
  
    }
    
    
 
    
     return 0;
}