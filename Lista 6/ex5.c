#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void eliminaespacos(char origem[50]){
    char destino[50];
    int tamanho, i, j = 0;

    tamanho = strlen(origem);
    for (i=0; i<=tamanho; i++)
    {
        if(origem[i] != ' ') {
            destino[j] = origem[i];
            j++;
        }
    }
    printf("String resultante: %s", destino);
}
int main()
{
    char origem[50], destino[50];
    int i = 0, j = 0, tamanho = 0;

    printf ("Digite a string\n");
    scanf("%[^\n]", origem);
    eliminaespacos(origem);

}