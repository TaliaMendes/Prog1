#include<stdlib.h>

int idadedias(int anos, int meses, int dias){
int convIdadeAnos, convIdadeMeses, idadeDias;

    convIdadeAnos = anos * 365;
    convIdadeMeses = meses * 30;

    idadeDias = convIdadeAnos + convIdadeMeses + dias;

        return idadeDias;
}


int main(){
int anos , meses=0, dias=0, resultIdade=0;

printf("Digite sua idade em anos\n");
scanf("%d",&anos);

printf("Digite sua idade em meses\n");
scanf("%d",&meses);

printf("Digite sua idade em dias\n");
scanf("%d",&dias);

resultIdade = idadedias(anos , meses, dias);
printf("A idade em dias e: %d\n",resultIdade);


    return 0;
}