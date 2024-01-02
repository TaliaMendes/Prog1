#include <stdio.h>

int main()
{int positivos=0, negativos=0, cont; 
 int num ;
 float media=0, soma=0 , contnum=0 ;
       
    while(num != 0)
  {
     printf("Digite varios numeros, ou 0 para sair\n");
     scanf("%d",&num);
    
     soma = soma + num;
     
    if(num !=0){
    contnum = contnum +1;} 
    
      if(num>0)
     {
        positivos++; 
     }
      
    else if(num<0)
    {
      negativos++;
    }
   
       
  }

   media = soma/contnum;
   printf("A media dos numeros e:%f\n",media);

   printf("Os numeros positivos sao:%d\n", positivos);

   printf("Os numeros negativos sao:%d\n", negativos);   
       
       
    
    
        
        
        
        
         return 0;
}