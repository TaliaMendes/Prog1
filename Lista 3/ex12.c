#include <stdio.h>

int main()
{int x=0 ;

     for(x=2 ; x<= 13 ; x+=2)
    {
        printf("%d\n", x);
    } 
    
  // imprimi de 2 em 2 a cada vez testada, iniciando de 2 até menor igual a 13.
        
        
     for(x=5 ; x<= 22 ; x+=7)
    {
        printf("%d\n", x);
    }    
        
  // imprimi de 7 em 7 a cada vez testada, iniciando de 5 ate menor igual a 22.
        
        
     for(x=3 ; x<=15 ; x+=3)
    {
        printf("%d\n", x);
    }       
        
  // imprimi de 3 em 3 a cada vez testada, iniciando de 3 ate menor igual a 15.

                
     for(x=1 ; x<= 5 ; x+=7)
      { 
        printf("%d\n", x);
      }        
        
  // imprimi somente o numero 1 , pois o teste incia com 1 até menor igual a 5 , incrementando de 7 em 7. Como 5 é menor que 7 , não ocorre nenhum incremento.
        
            
    for(x=12 ; x>=2 ; x-=3)
     {
       printf("%d\n", x);
     }            
            
  // Decrementa de 3 em 3 a cada vez testada , iniciando de 12 ate 2.         
            
                   
        
         return 0;
}