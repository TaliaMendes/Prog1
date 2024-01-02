#include<stdio.h>

void estacao(int dia , int mes){
  int estacaoData;

     if(dia>= 23 && mes>=9 || dia<=20 && mes==12)
       {
           printf("%d/%d e Primavera \n", dia,mes);
       }

     else if(dia>=21 && mes==12 || dia<=20 && mes<=3)
       {
           printf("%d/%d e Verao \n", dia,mes);
       }
     
     else if(dia>= 21 && mes>=3 || dia<= 20 && mes<=6)
       {
           printf("%d/%d e Outono \n", dia,mes);
       } 
    
     else if(dia>= 21 && mes>=6 || dia <=22 && mes<=9)
       {
           printf("%d/%d e Inverno \n", dia,mes);
       }
    
    
    return 0;
} 


int main ()
{ int dia , mes;

    printf("Digite uma data em dia\n");
    scanf("%d", &dia);
    
    printf("Digite uma data em mes\n");
    scanf("%d", &mes);
    
    estacao(dia , mes);
    
     return 0;   
}