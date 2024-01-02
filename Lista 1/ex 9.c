#include<stdio.h>
 
int main()
{float montantetotal ,result, taxajuros, convjuros, montante;
 int periodo;

    printf("Digite o valor do montante total\n");
    scanf("%f",&montantetotal);
    
    printf("Digite o período em meses do rendimento\n");
    scanf("%d",&periodo);
    
    printf("Digite a taxa de juros mensais \n");
    scanf("%f",&taxajuros);
    
    convjuros = taxajuros/100;
    
    montante = montantetotal * (convjuros * periodo);
    
    printf("resultado de ganho %f\n", montante);
    
    result = montante + montantetotal;
    
    printf("Montante final %f\n", result);
    printf("Investimento inicial %f\n", montantetotal);
    
    return 0;
}