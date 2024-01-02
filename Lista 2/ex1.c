#include<stdio.h>
 
int main()
{int horas , minutos , conv, final;


    printf("Digite um horário em horas\n");
    scanf("%d",&horas);
    
    printf("Digite um horário em minutos\n");
    scanf("%d",&minutos);

    conv = (horas * 60) + minutos;
    
    final = 1440 - conv;
    printf("A hora em minutos é %d \n",final);
       
    return 0;
}