#include<stdio.h>
 
int main()
{ float tempc , tempf=0;

    printf("Digite uma temperatura em graus C°\n");
    scanf("%f", &tempc);
    
    tempf = ((tempc * 9)+ 160)/5;
    printf("A temperatura em fahrenheit é:%f \n", tempf);

    
          return 0; 
}