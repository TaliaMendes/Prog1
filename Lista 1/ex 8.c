#include<stdio.h>
 
int main()
{float tempc , tempf;
    
    printf("Digite uma temperatura em fahrenheit\n");
    scanf("%f",&tempf);
    
    tempc = ((tempf - 32)*5)/9;
    
    printf("A temperatura em graus Celsius é: %f \n", tempc);
    

    
    
          return 0; 
}