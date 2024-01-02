#include <stdio.h>

#define NUM_ALUNOS 4
#define NUM_COLUNAS 2

void le_notas(float controle[][NUM_COLUNAS]){
    for(int i = 0; i < NUM_ALUNOS; i++){
        for(int j = 0; j < NUM_COLUNAS; j++){
            printf("Digite a nota %d do aluno %d: ", (j+1),(i+1));
            scanf("%f", &controle[i][j]);
        }
    }
}

void calcula_media(float controle[][NUM_COLUNAS]){
    float somaLinha = 0;
    for(int i =0; i < NUM_ALUNOS; i++){
        for(int j =0; j < NUM_COLUNAS; j++){
            somaLinha+=controle[i][j];
        }
        controle[NUM_ALUNOS][i] = somaLinha/NUM_COLUNAS;
        somaLinha = 0;
    }
}

void exibe_relatorio(float controle[][NUM_COLUNAS]){
    for(int i = 0; i < NUM_ALUNOS; i++){
            printf("Aluno: %d\n", (i+1));
        for(int j = 0; j < NUM_COLUNAS; j++){
            printf("\tNota Prova %d: %.2f", (j+1),controle[i][j]);
        }
        printf("\t Media Nota Aluno %d: %.2f",(i+1),controle[NUM_ALUNOS][i]);

        printf("\n");

    }
}

void exibe_media_global(float controle[][NUM_COLUNAS]){
    float soma, media;
    int i;
    for (i = 0; i < NUM_ALUNOS; i++){
        soma+=controle[NUM_ALUNOS][i];

    }
    media=soma/NUM_ALUNOS;
    printf("Media global e: %.2f", media);
}

int main(){
    float controle[NUM_ALUNOS][NUM_COLUNAS];
    le_notas(controle);
    calcula_media(controle);
    exibe_relatorio(controle);
    exibe_media_global(controle);
    return 0;
}