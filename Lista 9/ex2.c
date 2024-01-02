#include<stdio.h>
#include<math.h>

int main(){

    struct coordenadas
    {
        float x;
        float y;
    };

    struct coordenadas plano;

    float distancia;

    printf("\n------------Coletando dados----------\n\n");

    printf("Digite um valor para a coordenada X:\n");
    scanf("%f",&plano.x);

    printf("Digite um valor para a coordenada Y:\n");
    scanf("%f",&plano.y);

    distancia = pow(plano.x,2) + pow(plano.y,2);
    distancia = sqrt(distancia);

    printf("A distancia e+ : %.2f", distancia);


     return 0;
}