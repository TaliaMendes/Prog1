#include<stdio.h>
 
int main()
{ int a , b , troca;

    printf("Digite um valor\n");
    scanf("%d", &a);
    
    printf("Digite um valor\n");
    scanf("%d", &b);
    
    printf("Valor inicial a=%d , b=%d \n", a , b);
    
    troca = a;
    a = b;
    b = troca;
    printf("Valor trocado a=%d , b=%d \n", a , troca);

    
          return 0; 
}