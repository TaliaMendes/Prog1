#include<stdio.h>

int somatorio(int num)
{ int i, resultsoma=0;

    for(i=1; i<=num ; i++)
    {
       resultsoma = resultsoma + i;
    }    
    
         return resultsoma;
}


int main()
{ int num;
  int resultado;
    
    printf("Digite um numero\n");
    scanf("%d",&num);

   resultado = somatorio(num);
    
    printf("A soma e:%d \n", resultado);
    
        return 0;
}

  