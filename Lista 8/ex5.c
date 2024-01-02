#include<stdio.h>

int main(){
    
   int num[5], dobro;
   int *pont;
   
    pont = num;
      for(int i=0 ; i<5 ; i++){
           printf("Digite um valor\n");
           scanf("%d", &num[i]);
     }
     
    
      for(int i=0 ; i<5 ; i++){
           printf("%d\n",*pont *2);
           pont++;
     }
     
    

    
    return 0;
}