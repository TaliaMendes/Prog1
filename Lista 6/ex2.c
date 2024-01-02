#include<stdio.h>
#include<string.h>

int main(){
char palavra[50], aux[50];
int tamanho , j=0, palindromo=1;

    printf("Digite uma palavra\n");
    scanf("%s", &palavra);
   
    
   tamanho = strlen(palavra);
   
   tamanho--;
        
     for(int i=tamanho ; i>=0 ; i--)
    {
       aux[j] = palavra[i];
        j++;
    }
    
    for(int i=0 ; i<=tamanho; i++)
    {
       if(aux[i] != palavra [i])
        {
          palindromo=0;
        }
    }
    
    if(palindromo == 1)
    {
      printf("Palindromo");
    } else {
      printf("Nao e palindromo");
    }
    
     return 0;   
}