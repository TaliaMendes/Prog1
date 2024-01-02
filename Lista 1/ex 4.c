#include<stdio.h>
 
int main()
{ float salariomin , salariop, salariot;

    printf("Digite o valor do salário mínimo.\n");
    scanf("%f", &salariomin);
    
    printf("Digite o valor do seu salário.\n");
    scanf("%f", &salariop);
    
    salariot = salariop / salariomin ;
    printf("Você recebe %2.f salários minimos", salariot);
      
          return 0;
}