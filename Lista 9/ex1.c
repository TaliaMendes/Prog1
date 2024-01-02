#include<stdio.h>

int main(){

    struct identificacao
    {
        int idade;
        char nome[20];
        char endereco[40];
    };
    
    struct identificacao pessoa;
    
    printf("\n------------Coletando dados----------\n\n");
 
    printf("Digite seu nome:\n");
    fgets(pessoa.nome,20,stdin);
    
    printf("Digite seu endereco:\n");
    fgets(pessoa.endereco,40,stdin);
    
    printf("Digite sua idade:\n");
    scanf("%d",&pessoa.idade);

    printf("\n------------Exibindo dados----------\n\n");
 
    printf("Nome:--------------%s", pessoa.nome);

    printf("Endereco:----------%s", pessoa.endereco);

    printf("Idade:-------------%d", pessoa.idade);

    
     return 0;   
}