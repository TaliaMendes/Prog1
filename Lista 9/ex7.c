#include<stdio.h>

typedef struct ListaJogadores
{
    int numCamisa;
    float peso;
    int altura;
    char nome[50];
}Jogadores;

void le_jogadores(Jogadores jogadores[], int numJogadores){

    for(int i=0 ; i<numJogadores ; i++)
    {
        printf("Digite seu nome\n");
        fflush(stdin);
        fgets(jogadores[i].nome,50,stdin);

        printf("Digite o numero da camisa\n");
        scanf("%d",&jogadores[i].numCamisa);

        printf("Digite seu peso\n");
        scanf("%f",&jogadores[i].peso);

        printf("Digite a altura em centimetros\n");
        scanf("%d",&jogadores[i].altura);

    }
}


void exibe_jogadores(Jogadores jogadores[], int numJogadores){
    for(int i = 0; i < numJogadores; i++) {

        printf("Nome do jogador:%s\n",jogadores[i].nome);
        printf("Numero da camisa:%d\n",jogadores[i].numCamisa);
        printf("Peso:%f\n",jogadores[i].peso);
        printf("Altura:%d\n",jogadores[i].altura);
    }
}

void jogador_mais_baixo(Jogadores jogadores[],int numJogadores){
    int verificaMaisBaixo = 1000000;
    char inicial;

    for(int i = 0; i < numJogadores; i++) {
        if(verificaMaisBaixo > jogadores[i].altura){
            verificaMaisBaixo = jogadores[i].altura;
            inicial = jogadores[i].nome[0];
        }
    }
    printf("Inicial do jogador mais baixo : %c\n",inicial);
}

void jogador_mais_pesado(Jogadores jogadores[],int numJogadores){
    int verificaMaisPesado=0;
    int numero;

    for(int i = 0; i < numJogadores; i++) {
        if(verificaMaisPesado < jogadores[i].peso){
            verificaMaisPesado = jogadores[i].peso;
            numero = jogadores[i].numCamisa;
        }
    }
    printf("Numero jogador mais pesado : %d\n",numero);
}

int main(){

    Jogadores *jogadores;
    jogadores = (Jogadores*) malloc(11 * sizeof(Jogadores));

    le_jogadores(jogadores, 11);
    exibe_jogadores(jogadores,11);
    jogador_mais_baixo(jogadores,11);
    jogador_mais_pesado(jogadores,11);

    return 0;
}