#include<stdio.h>

int main()
{int x,y;

    printf("Digite um numero para x e y\n");
    scanf("%d %d",&x,&y);
    
    if(x>0 && y>0)
    {printf("Esta no primeiro quadrante");}
    
    else if(x<0 && y>0)
    {printf("Esta no segundo quadrante");}
    
      
    else if(x<0 && y<0)  
    {printf("Esta no terceiro quadrante");}
    
    else if(x>0 && y<0)
    {printf("Esta no quarto quadrante");}
    
    
    
    return 0;
}


    