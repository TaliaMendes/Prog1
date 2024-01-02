#include<stdio.h>

int contaimpar(int n1 , int n2){
int i , impares=0 , cont=0 ;
   
    if(n2<n1)
  { 
      for(i=n2 ; i<=n1 ; i++) 
      {
          if(i%2 !=0)
           {
              impares = i;
              cont = cont + 1;
           }
      }
  } 
   else if(n1<n2) 
   {
       for(i=n1 ; i<=n2 ; i++) 
      {
          if(i%2 !=0)
           {
              impares = i;
              cont = cont + 1;
           }
      }
  }
    
    
     return cont;
} 


int main (){
int n1 ,n2, result;

    printf("Digite o primeiro numero\n");
    scanf("%d",&n1);

    printf("Digite o segundo numero\n");
    scanf("%d",&n2);

    result = contaimpar(n1,n2);

    printf("A quantidade de n° impares entre %d e %d e: %d\n",n1 , n2 , result);


         return 0;
}