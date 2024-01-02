#include<stdio.h>
#include<string.h>

void copia(char palavra[50]){
char copia[50];
int tamanho;    
   
    tamanho = strlen(palavra);

     for(int i=0 ; i<tamanho ; i++)
    {
       copia[i] = palavra[i];
    
    }
    printf("%s\n",copia); 

      
}


int main(){
char palavra[50];

    printf("Digite uma palavra\n");
    scanf("%s", &palavra);
   
    copia(palavra);
    

     
    
    
    return 0;   
}
