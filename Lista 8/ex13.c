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

    printf("Vetor resultante \n");
    for(int i=0 ; i<tamanho3; i++) {
        printf("%d\n", vetor3[i]);
    }

    return 0;
}
int main(){

    int n, *vetor = NULL;

    do {

        printf("Digite um valor inteiro valido\n");
        scanf("%d",&n);

    } while(n<0);

    vetor = (int*) malloc(n*sizeof(int));



    for(int i=0 ; i<n; i++) {
        printf("Digite os valor da posicao %d do vetor\n", i);
        scanf("%d", &vetor[i]);

        if(vetor[i] < 1 ) {

            printf("Digite os valor da posicao %d do vetor novamente\n", i);
            scanf("%d", &vetor[i]);
        }
    }


    for(int i=0 ; i<n; i++) {
        printf("Vetor na posicao %d : %d\n", i, vetor[i]);

    }

    return 0;
}