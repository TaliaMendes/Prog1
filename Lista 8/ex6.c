#include<stdio.h>

void imprimivetor(int *num[5]){

    for(int i=0 ; i<5 ; i++){
           printf("Digite um valor\n");
           scanf("%d", &num[i]);
     }
     

    for(int i=0 ; i<5 ; i++){
           printf("%d\n",*(num + i));
     }

    return 0;
}


int main(){
    
   int num[5];
   
    imprimivetor(&num);
 
    
    return 0;
}