#include<stdio.h>
 
int main()
{ int num1, sucessor, antecessor;

    printf("Digite um número\n");
    scanf("%d",&num1);
    
    sucessor = num1 + 1;
    printf("O sucessor do número é:%d \n", sucessor);
    
    antecessor = num1 - 1;
    printf("O antecessor do número é:%d \n", antecessor);
    
    
    return 0;
}