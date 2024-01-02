#include<stdio.h>

int main()
{ int codigo; 
     
    
        printf("Digite um codigo de 101 a 106\n");
        scanf("%d",&codigo);
        
    switch(codigo)
 {
    case 101:
      printf("Vendedor\n");
   break;

    case 102:
      printf("Atendente\n");
    break;
    
    case 103:
       printf("Auxiliar tecnico\n");
    break;
    
    case 104:
       printf("Assistente\n");
    break;
    
    case 105:
       printf("Coordenador de grupo\n");
    break;
    
    case 106:
       printf("Gerente\n");
    break;
    
   default:
        printf("O codigo e invalido\n");
 }
    
     return 0;
}