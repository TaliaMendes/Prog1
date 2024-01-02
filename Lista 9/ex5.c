#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct dados
{
    char nome[40];
    char esporte[40];
    int idade;
    float altura;
}Atleta;

int main(){

    int n, i,verificaMaisAlto = 0, verificaMaisVelho = 0;

    char nomeMais[40];
    char esporteMais[40];
    int idadeMais;
    float alturaMais;

    Atleta *vetorAtletas, maisAlto, maisVelho;
    printf("\n------------Coletando dados----------\n\n");

    printf("Digite quantos atletas deseja cadastrar\n");
    scanf("%d", &n);
    vetorAtletas = (Atleta*) malloc(n * sizeof(Atleta));

    while(n > 0) {
        i =0;
        printf("Digite seu nome:\n");
        fflush(stdin);
        fgets(vetorAtletas[i].nome,40,stdin);

        printf("Digite o esporte que voce pratica\n");
        fgets(vetorAtletas[i].esporte,40,stdin);

        printf("Digite sua idade\n");
        scanf("%d",&vetorAtletas[i].idade);

        printf("Digite sua altura em centimetros\n");
        scanf("%f",&vetorAtletas[i].altura);

        if(verificaMaisVelho < vetorAtletas[i].idade ){
            verificaMaisVelho = vetorAtletas[i].idade;

            maisVelho.idade = vetorAtletas[i].idade;
            strcpy(maisVelho.nome,vetorAtletas[i].nome);
            strcpy(maisVelho.esporte,vetorAtletas[i].esporte);
            maisVelho.altura = vetorAtletas[i].altura;
        }

        if(verificaMaisAlto < vetorAtletas[i].altura){
            verificaMaisAlto = vetorAtletas[i].altura;

            maisAlto.idade = vetorAtletas[i].idade;
            strcpy(maisAlto.nome,vetorAtletas[i].nome);
            strcpy(maisAlto.esporte,vetorAtletas[i].esporte);
            maisAlto.altura = vetorAtletas[i].altura;
        }
        i++;
        n--;
    }

    printf("\n-------------------------- Dados do atleta mais velho-----------------------------\n");
    printf("Nome: %s \n", maisVelho.nome);
    printf("Idade: %d \n", maisVelho.idade);
    printf("Idade: %s \n", maisVelho.esporte);
    printf("Altura: %.2f \n", maisVelho.altura);



    printf("\n-------------------------- Dados do atleta mais alto-----------------------------\n");
    printf("Nome: %s \n", maisAlto.nome);
    printf("Idade: %d \n", maisAlto.idade);
    printf("Idade: %s \n", maisAlto.esporte);
    printf("Altura: %.2f \n", maisAlto.altura);
    return 0;
}