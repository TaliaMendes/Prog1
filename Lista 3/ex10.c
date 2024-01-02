#include <stdio.h>

int main()
{int num, i , fatorial=1;

    printf("Digite um numero\n");
    scanf("%d", &num);
    
    for(i=num ; i>=1 ; i--)
    {
        fatorial = fatorial * i;
    }
    
    printf("%d\n", fatorial ); 
           
    return 0;
}