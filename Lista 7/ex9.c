#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NUMLINHA 4
#define NUMCOLUNA 4

void tipooperacao(int matriz[NUMLINHA][NUMCOLUNA]){
    char operacao;
    int tipocalculo, somaLinha = 0, somaColuna = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0 , somaBorda=0, somaInterno = 0;
    int multLinha = 1 , multColuna = 1, multDiagonalPrincipal = 1, multDiagonalSecundaria = 1 , multBorda=1, multInterno = 1;

    printf("Digite S para soma e M para multiplicacao\n");
    getchar();
    scanf("%c",&operacao);

    printf("Opcoes de calculos disponiveis\n 1 -> Calculo para cada linha\n 2 -> Calculo para cada coluna\n 3-> Calculo diagonal principal\n 4 -> Calculo para diagonal secundaria\n 5 -> Calculo dos elementos da borda da matriz\n 6 -> Calculo para elementos internos da matriz\n");
    scanf("%d", &tipocalculo);

    if(operacao == 'S') {

       switch(tipocalculo)
       {
            case 1:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        somaLinha = somaLinha + matriz[i][j];
                    }
                printf("Soma Linha %d: %d\n", i,somaLinha);
                somaLinha = 0;
                }
            break;

            case 2:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        somaColuna = somaColuna + matriz[j][i];
                    }
                printf("Soma Coluna %d: %d\n", i,somaColuna);
                somaColuna = 0;
                }
            break;

            case 3:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        if(i==j){
                            somaDiagonalPrincipal = somaDiagonalPrincipal + matriz[i][j];
                        }
                    }
                }
                printf("Soma Diagonal Principal: %d\n",somaDiagonalPrincipal);
            break;

            case 4:
                for(int i = 0; i< NUMLINHA; i++) {
                    somaDiagonalSecundaria = somaDiagonalSecundaria + matriz[i][NUMCOLUNA - (i+1)];
                }
                printf("Soma Diagonal Secundaria: %d\n",somaDiagonalSecundaria);
            break;

            case 5:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        if(i==0){
                            somaBorda = somaBorda + matriz[i][j];
                        } else if (j == 0 || j == NUMCOLUNA -1) {
                            somaBorda = somaBorda + matriz[i][j];
                        } else {
                            if(i == NUMLINHA - 1) {
                                somaBorda = somaBorda + matriz[i][j];
                            }
                        }
                    }
                }
                printf("Soma Borda: %d\n",somaBorda);
            break;

            case 6:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        if((i!=0 && j!=0) && (i!=NUMLINHA-1 && j!=NUMCOLUNA-1)){
                            somaInterno = somaInterno + matriz[i][j];
                        }
                    }
                }
                printf("Soma Interno: %d\n",somaInterno);
            break;

            default:
                return 0;


       }

    } else if (operacao == 'M') {

        switch(tipocalculo)
        {
            case 1:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        multLinha = multLinha * matriz[i][j];
                    }
                printf("Multiplicação Linha %d: %d\n", i,multLinha);
                multLinha = 1;
                }
            break;

            case 2:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        multColuna = multColuna * matriz[j][i];
                    }
                printf("Multiplicação Coluna %d: %d\n", i,multColuna);
                multColuna = 1;
                }
            break;

            case 3:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        if(i==j){
                            multDiagonalPrincipal = multDiagonalPrincipal * matriz[i][j];
                        }
                    }
                }
                printf("Multiplicação Diagonal Principal: %d\n",multDiagonalPrincipal);
            break;

            case 4:
                for(int i = 0; i< NUMLINHA; i++) {
                    multDiagonalSecundaria = multDiagonalSecundaria * matriz[i][NUMCOLUNA - (i+1)];
                }
                printf("Multiplicação Diagonal Secundaria: %d\n",multDiagonalSecundaria);
            break;

            case 5:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        if(i==0){
                            multBorda = multBorda * matriz[i][j];
                        } else if (j == 0 || j == NUMCOLUNA -1) {
                            multBorda = multBorda * matriz[i][j];
                        } else {
                            if(i == NUMLINHA - 1) {
                                multBorda = multBorda * matriz[i][j];
                            }
                        }
                    }
                }
                printf("Multiplicação dos elementos da Borda: %d\n",multBorda);
            break;

            case 6:
                for(int i = 0; i< NUMLINHA; i++) {
                    for(int j = 0; j< NUMCOLUNA; j++) {
                        if((i!=0 && j!=0) && (i!=NUMLINHA-1 && j!=NUMCOLUNA-1)){
                            multInterno = multInterno * matriz[i][j];
                        }
                    }
                }
                printf("Multiplicação dos elementos internos: %d\n",multInterno);
            break;

            default:
                return 0;


       }



    }



}

void imprimimatriz(int matriz[NUMLINHA][NUMCOLUNA]){


    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            printf("%d\t",matriz[i][j]);
         }
         printf("\n");
    }
}


void preencheMatriz(int matriz[NUMLINHA][NUMCOLUNA]) {


    for(int i=0 ; i<NUMLINHA ; i++)
    {
        for(int j=0 ; j<NUMCOLUNA ; j++)
         {
            printf("Digite valores para matriz na posicao[%d][%d]\n",i,j);
            scanf("%d",&matriz[i][j]);
         }
    }
}
int main(){
    int matriz[NUMLINHA][NUMCOLUNA];

    preencheMatriz(matriz);
    imprimimatriz(matriz);
    tipooperacao(matriz);

    return 0;
}