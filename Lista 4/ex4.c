#include<stdlib.h>

 char conceitoMedia(float media){
  char conceitos;

 
     if(media>=0 && media<=49)
       {
         conceitos = 'D';
       }
             
         
     else if(media>=50 && media<=69)
       {
         conceitos = 'C';
       }
              
        
     else if(media>=70 && media<=89)
       {
          conceitos = 'B';
       }
             
        
     else if(media>=90 && media<=100)
       {
         conceitos = 'A';
       }
             
      return conceitos;
} 


int main ()
{float media , nota ,somamedia=0 , contmedia=0;
 char result;
    while(nota != 0)
    {
       printf("Digite uma nota , ou 0 para sair\n");
       scanf("%f", &nota);
    
     if(nota != 0){ 
         somamedia = somamedia + nota;
         contmedia = contmedia + 1;
        }
   
     }

    media = somamedia/contmedia;
    
    result = conceitoMedia(media);

    printf("O conceito da media da nota e: %c \n", result);




    
     return 0;   
}