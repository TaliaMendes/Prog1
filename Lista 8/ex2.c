#include<stdio.h>

int main(){
    
    int x , y;
    
    int *pX = &x;
    int *pY = &y;
    
    printf("Digite um valor para X \n");
    scanf("%d",&x);
    
    printf("Digite um valor para Y \n");
    scanf("%d",&y);
    
    
    if(pX >pY)
      {
        printf("O conteudo da variavel com maior endereço e:%d\n",*pX);
      }
    else{
        
        printf("O conteudo da variavel com maior endereço e:%d\n",*pY);
     }
    
     return 0;
}