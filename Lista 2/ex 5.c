#include<stdio.h>

int main()
{int a,b,c;

    printf("Digite o primeiro numero\n");
    scanf("%d",& a);
    
    printf("Digite o segundo numero\n");  
    scanf("%d",& b);
    
    printf("Digite o terceiro numero\n");
    scanf("%d",& c);
    
    
    if(a==b && a==c)
    {
    printf("Triângulo equilatero\n");
    }
    
    else if(a==b && b!=c)
    {
    printf("Triangulo isosceles\n");
    }
    
    
    else
    {
    printf("Triangulo escaleno\n");
    }
    
    
        return 0;
}


    