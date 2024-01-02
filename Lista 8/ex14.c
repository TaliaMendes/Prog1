#include<stdlib.h>
#include<stdio.h>
void exibevetor(float *vetor, int elementos){

    for(int i=0 ; i<elementos ; i++){
        printf("Elemento no vetor : %.2f\n",*(vetor+i));

    }

}

int *aloca_vetor(int elementos){
    float *vetor;

    vetor = (float *) malloc(elementos * sizeof(float));
    return vetor;
}

int main(){

    int elementos;
    float *vetor;

    printf("Digite a quantidade de elementos a serem alocados\n");
    scanf("%d",&elementos);

    vetor = aloca_vetor(elementos);

    for(int i =0; i<elementos; i++) {
        printf("Digite o elemento da posicao %d:\n", i+1);
        scanf("%f",(vetor+i));
    }
    exibevetor(vetor, elementos);




    return 0;
}