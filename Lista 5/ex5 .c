#include<stdio.h>

int main(){
int vetor[20]; 
    
    for(int i=0 ; i<20 ; i++)
    {
       printf("Digite 20 valores\n");
       scanf("%d",&vetor[i]);        
 
    }
    
    for(int i=0 ; i<20 ; i++)
    {
       printf("Os valores contidos no vetor são: %d\n",vetor[i]);
    
      
    }
    
   for(int i=19 ; i>=0; i--)
    {
     printf("Os valores contidos no 2° vetor são: %d\n",vetor[i]);
    
    
    }
    
    
    
    
    
    
    
      
    
    
         return 0;   
}