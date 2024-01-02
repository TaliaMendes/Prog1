#include<stdio.h>
 
int main()
{int horas , minutos , conv;


    printf("Digite um horário em horas\n");
    scanf("%d",&horas);
    
    printf("Digite um horário em minutos\n");
    scanf("%d",&minutos);

    conv = (horas * 60) + minutos;
    
    printf("A hora em minutos é %d \n", conv);
       
    return 0;
}