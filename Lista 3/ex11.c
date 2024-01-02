#include <stdio.h>

int main()
{float filhos ,mediaf, somaf=0, contf=0 ;
 float salario, maior, medias, somas=0 , conts=0;
 float aux=0 , porcentagem=0;
 char result = 's';

  
     while(result != 'n')
  {  
    printf("Digite seu salario\n");
    scanf("%f", &salario);
    
    printf("Digite quantos filhos voce tem\n");
    scanf("%d", &filhos);

    printf("Digite s para continuar ou n para sair\n");
    getchar();
    scanf("%c", &result);
    
    somas = somas + salario;
    conts = conts + 1;
    
    somaf = somaf + filhos;
    contf = contf + 1;

    if(salario > maior)
    {
       maior = salario;
    }

    if(salario <= 100)
     {
        aux++;
        
     }


  } 
   
   medias = somas/conts; 
   printf("A media do salario da populaçao e:%.0f \n",medias); 
   
   mediaf = somaf/contf; 
   printf("A media do n° de filhos da populaçao e:%f \n",mediaf); 
   
   printf("O maior salario e: %.0f\n",maior);

    porcentagem = (aux/conts)*100;
   printf("O percentual de pessoas com salario ate 100 e:%f\n", porcentagem);

     
    
    return 0;
}