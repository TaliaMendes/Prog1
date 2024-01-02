#include<stdio.h> 
#define TAMANHO 10

void imprimirNotas(float vetor1[10], float vetor2[10] , float calculaMedia[10])
{
     for(int i=0 ; i < TAMANHO ; i++)
    {
        printf("Nota 1: %.2f\n", vetor1[i]);
    
        
        printf("Nota 2: %.2f\n", vetor2[i]);
    
       
        printf("Media:%.2f\n", calculaMedia[i]);
     
    }
;

    return 0;
}
void calcularMedia(float vetor1[10], float vetor2[10], float calculaMedia[10])
{
    for(int i=0 ; i<TAMANHO ; i++)
    {
       calculaMedia[i] = (vetor1[i]+vetor2[i])/2;        
    }
    
    imprimirNotas(vetor1 , vetor2, calculaMedia);
    
    return 0;
}

void preencheVetor(float vetor1[10] ,float vetor2[10]){
     
float calculaMedia[10];

     for(int i=0 ; i<TAMANHO ; i++)
    {
       printf("Digite 10 valores\n");
       scanf("%f",&vetor1[i]);        
    }
    
    for(int i=0 ; i<TAMANHO ; i++)
    {
       printf("Digite 10 valores\n");
       scanf("%f",&vetor2[i]);        
    }
    
    calcularMedia(vetor1, vetor2, calculaMedia);
         return 0;
}


int main(){
float nota1[10], nota2[10];    
    preencheVetor(nota1, nota2);
     
    return 0;
 }