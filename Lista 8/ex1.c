#include<stdio.h>

int main(){
    
    int x = 10;
    int y = 20;
    
    int *pX = &x;
    int *pY = &y;
    
    if(pX >pY)
      {
        printf("O maior endereço é %p, variavel X\n", pX);
      }
    else{
        
        printf("O maior endereço é %p, variavel Y\n", pY);
     }
    
     return 0;
}