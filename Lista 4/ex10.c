#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float dado(){
  float sorteiodado;   
  
     sorteiodado = rand() %6 +1;
     
     return sorteiodado ;
} 
    


int main ()
{float resultado, cont1=0, cont2=0, cont3=0, cont4=0 ,cont5=0, cont6=0;
 float porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5, porcentagem6;   
   
    srand(time(NULL));
   
   for(int i=1 ; i<=1000000 ; i++) 
  {
   
   resultado = dado();
    
   printf("O numero sorteado e: %.0f \n", resultado); 
    
    if(resultado == 1)
    {
        cont1++; 
    }   
    
    else if(resultado == 2)
    {
        cont2++;
    }
    
    else if(resultado == 3)
    {
       cont3++;
    }
    
    else if(resultado == 4)
    {
        cont4++;
    }
    
    else if(resultado == 5)
    {
       cont5++;
    }
   
    else if(resultado == 6)
    {
        cont6++;
    }
    
  }    
    printf("O numero 1 foi sorteado %.0f vezes\n", cont1);
    
    printf("O numero 2 foi sorteado %.0f vezes\n", cont2);
  
    printf("O numero 3 foi sorteado %.0f vezes\n", cont3);
  
    printf("O numero 4 foi sorteado %.0f vezes\n", cont4);
  
    printf("O numero 5 foi sorteado %.0f vezes\n", cont5);
  
    printf("O numero 6 foi sorteado %.0f vezes\n", cont6);
    
    
    
    porcentagem1 = (cont1/1000000)*100;
    printf("A porcentagem que o numero 1 foi sorteado e:%.2f\n", porcentagem1);
    
    porcentagem2 = (cont2/1000000)*100;
    printf("A porcentagem que o numero 2 foi sorteado e:%.2f\n", porcentagem2);
    
    porcentagem3 = (cont3/1000000)*100;
    printf("A porcentagem que o numero 3 foi sorteado e:%.2f\n", porcentagem3);
    
    porcentagem4 = (cont4/1000000)*100;
    printf("A porcentagem que o numero 4 foi sorteado e:%.2f\n", porcentagem4);
    
    porcentagem5 = (cont5/1000000)*100;
    printf("A porcentagem que o numero 5 foi sorteado e:%.2f\n", porcentagem5);
    
    porcentagem6 = (cont6/1000000)*100;
    printf("A porcentagem que o numero 6 foi sorteado e:%.2f\n", porcentagem6);
    
    
     
     return 0;   
}