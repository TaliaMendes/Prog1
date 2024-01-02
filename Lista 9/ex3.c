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

    base = inferior.inf.x - superior.sup.x;

    if (base < 0) {
        base *= -1;
    }

    altura = inferior.inf.y - superior.sup.y;
    if (altura < 0) {
        altura*= -1;
    }

    area = base * altura;


    diagonal = pow(base,2) + pow(altura,2);
    diagonal = sqrt(diagonal);

    comprimento = base * 2;

    printf("Area: %.2f\n",area);
    printf("Diagonal: %.2f\n",diagonal);
    printf("COmprimento: %.2f\n", comprimento);
    return 0;
    }