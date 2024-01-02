#include<stdio.h>
#include<stdlib.h>

int main(){
    
    double vet[10];
    
        for(int i=0 ; i<10 ; i++){
            
            printf("Digite um numero com casas decimais\n");
            scanf("%lf", &vet[i]);        
      }
    
    float *pont = vet;
    
        for(int i=0 ; i<10 ; i++){
        
            printf("Endereço vetor %p\n",pont);
            pont++;
    }
    
    
     return 0;
}