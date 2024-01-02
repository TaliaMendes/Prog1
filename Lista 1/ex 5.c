#include<stdio.h>
 
int main()
{ float valorprod , desconto, valorfinal , valordesconto;

    printf("Digite o valor inicial de um produto\n");
    scanf("%f", &valorprod);
    
    printf("Digite um percentual de desconto\n");
    scanf("%f", &desconto);
    
    valordesconto = desconto/100;
    
    valorfinal = valorprod * valordesconto;
    
    printf("O valor do produto com desconto é: %3f\n", valorfinal);

    
          return 0; 
}
    