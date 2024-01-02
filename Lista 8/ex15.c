#include<stdlib.h>
#include<stdio.h>


int *aloca_vetor(int elementos){
    int *vetor;

    vetor = (int *) malloc(elementos * sizeof(int));
    return vetor;
}

void multiplicaVetor(int *vetor, int *vetor1, int qtde){
    int *vetorResultante;

    vetorResultante = (int *)malloc(qtde * sizeof(int));
    for(int i=0 ; i< qtde; i++){
        *vetorResultante = (*vetor) * (*vetor1);
        vetorResultante++;
        vetor++;
        vetor1++;
    }

    for(int i = 0; i < qtde; i++)
    {
        vetorResultante--;
    }

    for(int i = 0; i < qtde; i++)
    {
        printf("Multiplicacao dos vetores na posicao %d : %d \n",i, *(vetorResultante));
        vetorResultante++;
    }
}

int main(){

    int tamanho,*vetor, *vetor1;

    printf("Digite o tamanho dos vetores\n");
    scanf("%d",&tamanho);


    vetor = aloca_vetor(tamanho);
    vetor1 = aloca_vetor(tamanho);
    for(int i =0; i<tamanho; i++) {
        printf("Digite o elemento da posicao %d do primeiro vetor\n", i+1);
        scanf("%d",(vetor+i));
    }


    for(int i =0; i<tamanho; i++) {
        printf("Digite o elemento da posicao %d do segundo vetor\n", i+1);
        scanf("%d",(vetor1+i));
    }

    printf("%d\n",*(vetor+1));
    multiplicaVetor(vetor, vetor1, tamanho);

    return 0;
}