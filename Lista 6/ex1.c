#include<stdio.h>

int strichar(char str[10] , char c){
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i] == c){
            return i;
        }
        i++;
    }

    return -1;
}


int main(){

    char str[10] ,c ;
    int result;

    printf("Digite uma palavra \n");
    scanf("%s", str);


    printf("Digite uma letra a ser pesquisada na palavra\n");
    getchar();
    scanf("%c",&c);

    result = strichar(str,c);

    if(result != -1)
    {
        printf("\n\nA letra pesquisada esta na posicao:%d \n",result);

    } else {
        printf("\n\nA letra pesquisada nao existe\n");
    }

    return 0;
}