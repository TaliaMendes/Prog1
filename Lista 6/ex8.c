#include<stdio.h>
#include<string.h>

int main(){
    char frase[50];
    int tamanho;

    printf("Digite uma frase\n");
    scanf("%[^\n]",&frase);

    tamanho = strlen(frase);

    for(int i=0 ; i<tamanho ; i++)
    {
        if(frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'e' ||frase[i] == 'E' || frase[i] == 'i' || frase[i] == 'I' || frase[i] == 'o' || frase[i] == 'O' || frase[i] == 'u' || frase[i] == 'U')
        {
            frase[i] = 'p';
        }
    }

    printf("%s\n",frase);

    return 0;
}