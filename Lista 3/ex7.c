#include <stdio.h>

int main()
{int num=1, par=0 , impar=0;
 int media, somamedia=0 , totalmed=0;
 int mediatotal, somatotal=0, conttotal=0;
    
      
    while(num != 0)
  {
     printf("Digite varios numeros ou 0 para sair \n");
     scanf("%d",&num);
    
     if(num %2 == 0 && num != 0)
      {
        par++;
      }
    
    else if(num %2 != 0)
      {
        impar++;
      }
    
    if(num != 0 && num %2 == 0)
      {
        somamedia = somamedia + num;
        totalmed = totalmed + 1;
      }
    
    if(num != 0)
      {
        somatotal = somatotal + num;
        conttotal = conttotal + 1;
      }
    
  }
    
 
    printf("Os numeros pares sao:%d \n",par);
    printf("Os numeros impares sao:%d \n",impar);
    
    media = somamedia/totalmed;
    printf("A media dos valores pares e:%d \n", media);
   
    mediatotal = somatotal/conttotal;
    printf("A media total dos valores e:%d \n",mediatotal);
    
    
      return 0;
}





