#include<stdio.h>

int main(){
int num[20];
int contimpar=0 , contpar=0;


    for(int i=0 ; i<20 ; i++)
    {
        printf("Digite 20 numeros\n");
        scanf("%d",&num[i]);
    }   
        
    for(int i=0 ; i<20 ; i++)
    {
       printf("Os numeros contidos no vetor e:%d\n", num[i]);
   
      if(num[i] %2 == 0)
        {
          contpar++;
        }

       else if(num[i] %2 != 0)
        {
           contimpar++;
        }
   }
    
    printf("A quantidade de numeros pares e:%d\n",contpar);

    printf("A quantidade de numeros impares e:%d\n",contimpar);



     return 0;   
}