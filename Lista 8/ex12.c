#include<stdlib.h>
#include<stdio.h>

void somavetor(){

    int tamanho1, tamanho2,tamanho3;
    int *vetor3;
    int*vetor1,*vetor2;

    printf("Digite o tamanho do vetor 1\n");
    scanf("%d",&tamanho1);
    vetor1 = (int *) malloc(tamanho1 * sizeof(int));

    for(int i=0 ; i<tamanho1; i++) {
        printf("Digite os valores do primeiro vetor\n");
        scanf("%d", &vetor1[i]);
    }

    printf("Digite o tamanho do vetor 2\n");
    scanf("%d",&tamanho2);
    vetor2 = (int *) malloc(tamanho2 * sizeof(int));

    for(int i=0 ; i<tamanho2; i++) {
        printf("Digite os valores do segundo vetor\n");
        scanf("%d", &vetor2[i]);
    }

    if(tamanho1>tamanho2){

        tamanho3 = tamanho1;
    }else{
        tamanho3 = tamanho2;
    }

     vetor3 = (int *) malloc(tamanho3 * sizeof(int));

    for(int i=0 ; i<tamanho3; i++) {
        vetor3[i] = vetor1[i] + vetor2[i];
    }

    printf("Soma dos vetores  \n");
    for(int i=0 ; i<tamanho3; i++) {
        printf("%d\n", vetor3[i]);
    }

    return 0;
}
int main(){

    somavetor();

    return 0;
}