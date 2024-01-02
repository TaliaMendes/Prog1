#include<stdio.h>
 
int main()
{ int num1, num2 , soma , sub , multi , div;

    printf("Digite um número\n");
    scanf("%d",&num1);
    
    printf("Digite um número\n");
    scanf("%d",&num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;
   
    printf("%d %c %d %c %d \n", num1, '+', num2, '=', soma);
    printf("%d %c %d %c %d \n", num1, '-', num2, '=', sub);
    printf("%d %c %d %c %d \n", num1, '*', num2, '=', multi);
    printf("%d %c %d %c %d \n", num1, '/', num2, '=', div);
  
  
  
    
    return 0;
}
    