#include <stdio.h>

int main()
{int numero , maior=0 , i;

      for(i=0 ; i<10 ; i++)
    {
        printf("Digite 10 numeros \n");
        scanf("%d",&numero);
    
        if(numero > maior)
        {
            maior = numero;
        
        }
    
    }

    printf("O maior numero e %d\n", maior);



        
        return 0;
}
  