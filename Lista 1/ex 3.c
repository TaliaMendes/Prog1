#include<stdio.h>
 
int main()
{ float valgasto , acrescimo , valtotal;

    printf("Digite o valor gasto.\n");
    scanf("%f", &valgasto);
    
    acrescimo = valgasto * 0.1;
    
    printf("O valor da gorjeta é: %1.f\n", acrescimo);

    valtotal = valgasto + acrescimo;
    printf("A despesa total foi: %1.f\n",valtotal);
    
    
    return 0;
}