#include <stdio.h>

int main()
{int numero , i, cont=0 , contn=0;

      for(i=0 ; i<10 ; i++)
    {
        printf("Digite 10 numeros \n");
        scanf("%d",&numero);
    
        if(numero>=10 &&  numero<=20)
        {
            cont++;
        
        }
    
        else
        {
            contn++;
        }
    
    }

    printf("Numeros dentro do intervalo de 10 e 20 %d\n",cont);

    printf("Numeros fora do intervalo %d\n",contn);


        
        return 0;
}
  