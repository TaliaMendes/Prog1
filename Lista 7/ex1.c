 #include<stdio.h>

int main(){
int i , j;

 //A    
     for(i=1; i<=10 ; i++)
    {
        for(j=1 ; j<=10-i+1 ; j++)
        {
          printf("* ");
        }
    
    printf("\n");
   
     }
   
    printf("\n");
//B  
      
     for(i=1 ; i<=10 ; i++)
    {
        for(j=1 ; j<=i ;j++)
        {
          printf("* ");
        }
    
    printf("\n");
    
    
    }

    return 0;
} 