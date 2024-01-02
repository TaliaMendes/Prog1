#include <stdio.h>

int main()
{int encerrar;
 float salario=0 , maior;
 
    while(salario != -1)
  {
     printf("Digite seu salário , ou -1 para encerrar \n");
     scanf("%f",&salario);
    
    if(salario > maior)
      {
        maior = salario;
      }
    
  } 
    printf("O maior salario e:%.2f \n", maior);
    
    
    
    return 0;
}