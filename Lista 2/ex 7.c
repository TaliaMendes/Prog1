#include <stdio.h>

int main()
{float salario , codigo , salarioatual;

    printf("codigo1 = Tecnicos\n"); 
    printf("codigo2 = Gerentes\n"); 
    printf("codigo3 = Demais funcionarios\n");
    
    printf("Digite seu codigo de 1 a 3 \n");
    scanf("%f",&codigo);

    printf("Digite seu salário atual\n");
    scanf("%f",&salario);

    
    
    
     
    if(codigo == 1)
    {
        salarioatual = salario * 1.50 ;
        printf ("O salario atual e:%4.f\n", salarioatual);
    }

    else if(codigo == 2)
    {
        salarioatual = salario * 1.30 ;
        printf ("O salario atual e:%4.f\n",salarioatual);
    }

    else if(codigo == 3)
    {
        salarioatual = salario * 1.20 ;
        printf ("O salario atual e:%4.f\n", salarioatual);
    
    }
        
        return 0;
}
  