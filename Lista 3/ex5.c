#include <stdio.h>

int main()
{int idade ; 
 float peso , soma;
 char respost = 's'; 
    
      while (respost == 's') 
    {

     printf("Digite sua idade \n");
     scanf("%d", &idade);

       if(idade >=30)
     {   
        printf("Digite seu peso\n");
        scanf("%f", &peso);
          soma = soma + peso;
    }
        printf("Digite n para sair, ou s para continuar\n");
        getchar();
        scanf("%c", &respost);
}
     printf("A soma dos pesos e:%.3f\n",soma);
        
        return 0;
}