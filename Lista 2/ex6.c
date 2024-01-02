#include <stdio.h>

int main()
{float pi= 3.14159 , raio , altura, volume ;

    printf("Digite o raio da base de uma lata\n");
    scanf("%f",&raio);
   
    printf("Digite a altura de uma lata\n");
    scanf("%f",&altura);
    
    volume = pi * raio * 2 * altura;    
    printf("O volume e:%f\n", volume);   
          
        return 0;
}