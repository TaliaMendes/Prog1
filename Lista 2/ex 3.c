#include <stdio.h>
#include <math.h>
int main()
{float a , b , c;
 float delta , raiz , raiz2, op1, op2, op3; 

    printf("Digite o valor de a \n");
    scanf("%f",&a);

    printf("Digite o valor de b \n");
    scanf("%f",&b);

    printf("Digite o valor de c \n");
    scanf("%f",&c);
   
    op1 = pow(b,2);
    delta =  op1 - (4*a*c);
    op2 = sqrt(delta);
    op3 = b * -1;
   
    
    if(delta == 0)
    {
        raiz = (op3 + op2)/2*a;
        printf("%f\n",raiz);
        printf("Existe apenas uma raiz");
    }
    
    else if(delta >0)
    {
      raiz = (op3 + op2)/2*a;
      raiz2 = (op3 - op2)/2*a;
        printf("%f %f\n", raiz, raiz2);
        printf("Existem duas raízes");
    }
    
    else if(delta <0)
    {
        printf("Não existe raiz");
    }   
        
        return 0;
}