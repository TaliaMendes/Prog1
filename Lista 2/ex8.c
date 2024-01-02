#include<stdio.h>

int main()
{char nome;
 float peso, idade;
   
    printf("Digite o seu peso\n");
    scanf("%f",&peso);
    
    printf("Digite a sua idade\n");
    scanf("%f",&idade);
    
    printf("Digite a primeira letra do seu nome\n");
    getchar();
    scanf("%c",&nome);
    
    if(peso>=50 && idade>=18 && idade<=67)
    {
        printf("Voce podera doar sangue\n");
    
    }
    
    else
    {
        printf("Voce nao podera doar sangue\n");
    
    }
    
    
     return 0;
}


    