#include<stdio.h>
#include<math.h>

int main(){

    struct retangulo
    {
        float x;
        float y;
    };
    struct retangulo ponto;

    struct pontoSuperior {
        struct retangulo sup;
    };
    struct pontoSuperior superior;

    struct pontoInferior {
        struct retangulo inf;
    };
    struct pontoInferior inferior;

    float area;
    float base;
    float altura, diagonal, comprimento;

    printf("\n------------Coletando dados----------\n\n");

    printf("Digite um valor para a coordenada do ponto superior X:\n");
    scanf("%f",&ponto.x);

    printf("Digite um valor para a coordenada do ponto superior Y:\n");
    scanf("%f",&ponto.y);

    superior.sup = ponto;

    printf("Digite um valor para a coordenada do ponto inferior X:\n");
    scanf("%f",&ponto.x);

    printf("Digite um valor para a coordenada do ponto inferior Y:\n");
    scanf("%f",&ponto.y);

    inferior.inf = ponto;

    printf("Digite um valor para a coordenada X do ponto:\n");
    scanf("%f",&ponto.x);

    printf("Digite um valor para a coordenada Y do ponto:\n");
    scanf("%f",&ponto.y);

    if(ponto.x > superior.sup.x && ponto.x < inferior.inf.x) {
        if(ponto.y > superior.sup.y && ponto.y < inferior.inf.y) {
            printf("O ponto esta dentro do retangulo\n");
        }
    } else {
        printf("O ponto nao esta dentro do retangulo\n");
    }


    return 0;
    }