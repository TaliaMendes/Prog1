#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int dado(){
  int sorteio;

  sorteio = rand() %6 +1;

    return sorteio;
} 


int main ()
{int resultado;
   
    srand(time(NULL));  
    
   resultado = dado();
    
   printf("O numero sorteado entre 1 e 6 e: %d \n", resultado); 
    
    
    return 0;   
}