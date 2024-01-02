#include<stdio.h>
#include<string.h>

void strins(char str[50] , char c , int pos){
int tamanho, j=0;
char aux[50];

    tamanho = strlen(str);

    for(int i=0 ; i<tamanho ; i++)
     {
        if(i != pos)
        {
            aux[j] = str[i];
        } else {
            aux[j] = c;
            j++;
            aux[j] = str[i];
        }
        j++;
    }
    aux[j] = '\0';

    printf("%s\n",aux);



}


int main(){
char str[50] , c;
int pos;

    printf("Digite uma palavra\n");
    scanf("%[^\n]",&str);

    printf("Digite uma letra a ser incluida na palavra\n");
    getchar();
    scanf("%c",&c);

    printf("Digite a posicao para incluir a letra desejada\n");
    scanf("%d",&pos);

    strins(str , c , pos);

    return 0;
}