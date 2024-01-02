#include<stdio.h>

int main()
{int a,b;
int media, produto, divisao;

    printf("Digite o primeiro numero de 1 a 10\n");
    scanf("%d",&a);
    
    printf("Digite o segundo número de 1 a 10\n");
    scanf("%d",&b);
    
    media = a+b/2;
    
    
     if(a+b<8)
    {printf("A media dos numeros e:%d\n",media);}

    else{printf("A soma e maior que 8\n");}

    
    produto = a*b;
    
    
     if(a+b==8)
    {printf("O produto dos numeros e:%d\n", produto);}
    
       else{printf("A soma e diferente de 8\n");}
    
   
    if(a>b)
   { 
    divisao = a/b;
   }
 
    else
   {
      divisao = b/a;
   }


    if(a+b>8)
    {printf("A divisão dos numeros e:%d\n",divisao);}
    
    else {printf("A soma e menor que 8\n");}
    
    
    
     return 0;
}


    