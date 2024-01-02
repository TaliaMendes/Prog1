#include<stdio.h>
    typedef struct EnderecoAluno
    {
        char rua[40];
        int numero;
        char bairro[40];
        char cidade[40];
    }Endereco;

    typedef struct DataNascimento
    {
        int dia;
        int mes;
        int ano;
    }Data;

    typedef struct DadosAluno
    {
        char nome[40];
        char curso[20];
        int semestre;
        Data nascimento;
        Endereco endereco;
    }Aluno;

    void cadastra_alunos(Aluno alunos[], int qtde) {
        for(int i = 0; i < qtde; i++) {
            printf("\n------------------------ Dados do Aluno-----------------------------------\n");

            printf("Digite o nome do aluno:\n");
            fflush(stdin);
            fgets(alunos[i].nome,40,stdin);


            printf("Dia de nascimento:\n");
            scanf("%d", &alunos[i].nascimento.dia);

            printf("Mes de nascimento:\n");
            scanf("%d", &alunos[i].nascimento.mes);

            printf("Ano de nascimento:\n");
            scanf("%d", &alunos[i].nascimento.ano);

            printf("Digite o curso do aluno:\n");
            fflush(stdin);
            fgets(alunos[i].curso,20,stdin);

            printf("Semestre do aluno: \n");
            scanf("%d", &alunos[i].semestre);

            printf("\n----------------------- Endereco do Aluno-----------------------------------\n");

            printf("Rua: \n");
            fflush(stdin);
            fgets(alunos[i].endereco.rua,40,stdin);


            printf("Numero: \n");
            scanf("%d", &alunos[i].endereco.numero);

            printf("Bairro: \n");
            fflush(stdin);
            fgets(alunos[i].endereco.bairro,40,stdin);

            printf("Cidade: \n");
            fflush(stdin);
            fgets(alunos[i].endereco.cidade,40,stdin);
        }
    }
    void exibe_alunos(Aluno alunos[], int qtd) {
        for(int i = 0 ; i<qtd; i++) {
            printf("\nDados Aluno %d\n", i+1);
            printf("Nome: %s - %d/%d/%d - %s - semestre %d\n", alunos[i].nome, alunos[i].nascimento.dia, alunos[i].nascimento.mes, alunos[i].nascimento.ano, alunos[i].curso, alunos[i].semestre);
            printf("Endereco: Rua %s, numero %d - Bairro: %s\n", alunos[i].endereco.rua, alunos[i].endereco.numero, alunos[i].endereco.bairro);
        }

    }

    Aluno aluno_mais_antigo(Aluno alunos[], int qtde){
     int i, maisAntigo = 0, aux = 0;
     for(i = 1; i < qtde; i++){
             if(maisAntigo < alunos[i].semestre) {
                maisAntigo = alunos[i].semestre;
                aux = i;
             }
    }
    return alunos[aux];
}

    int main(){

        Aluno *alunos;
        int qtde = 0;

        printf("Digite a quantidade de alunos que deseja cadastrar \n");
        scanf("%d", &qtde);
        alunos = (Aluno*) malloc(qtde*sizeof(Aluno));

        cadastra_alunos(alunos, qtde);
        exibe_alunos(alunos, qtde);
        aluno_mais_antigo(alunos, qtde);
    }