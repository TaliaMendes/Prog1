#include<stdio.h> 


void imprimirSalario(int matricula[5], float salario[5] , float NovoSalario[5])
{ int funcionario[5];
     
    for(int i=0 ; i < 5 ; i++)
    {
       printf("Funcionario:%d\n",funcionario[i]);
        
       printf("Matricula: %d\n", matricula[i]);
    
       printf("Salario: %.2f\n", salario[i]);
    
       printf("Novo salario:%.2f\n", NovoSalario[i]);
     
    }


    return 0;
}
void reajusteSalario(int matricula[5], float salario[5])
{float NovoSalario[5];

    for(int i=0 ; i<5 ; i++)
   { 
    if(matricula %2 == 0)
       {
        NovoSalario = salario + 1,15;
       }
    
    else if(matricula %2 != 0)
       {
        NovoSalario = salario + 0,2;
       }
   } 
    imprimirSalario(int matricula, float salario,float NovoSalario)
    
    
       return 0;
}

void preenchesalario(int matricula[5], float salario[5]){
     

     for(int i=0 ; i<5 ; i++)
    {
       printf("Digite o n° da matricula\n");
       scanf("%d", matricula[i]);        
    }
    
    for(int i=0 ; i<5 ; i++)
    {
       printf("Digite o valor do seu salario\n");
       scanf("%f",&salario[i]);        
    }
    
    reajusteSalario(matricula, salario);
         
        return 0; 
}


int main(){#include<stdio.h> 


void imprimirSalario(int matricula[5], float salario[5] , float NovoSalario[5])
{ int funcionario[5];
     
    for(int i=0 ; i < 5 ; i++)
    {
       printf("Funcionario:%d\n",funcionario[i]);
        
       printf("Matricula: %d\n", matricula[i]);
    
       printf("Salario: %.2f\n", salario[i]);
    
       printf("Novo salario:%.2f\n", NovoSalario[i]);
     
    }


    return 0;
}
void reajusteSalario(int matricula[5], float salario[5])
{float NovoSalario[5];

    for(int i=0 ; i<5 ; i++)
   { 
    if(matricula %2 == 0)
       {
        NovoSalario = salario + 1,15;
       }
    
    else if(matricula %2 != 0)
       {
        NovoSalario = salario + 0,2;
       }
   } 
    imprimirSalario(int matricula, float salario,float NovoSalario)
    
    
       return 0;
}

void preenchesalario(int matricula[5], float salario[5]){
     

     for(int i=0 ; i<5 ; i++)
    {
       printf("Digite o n° da matricula\n");
       scanf("%d", matricula[i]);        
    }
    
    for(int i=0 ; i<5 ; i++)
    {
       printf("Digite o valor do seu salario\n");
       scanf("%f",&salario[i]);        
    }
    
    reajusteSalario(matricula, salario);
         
        return 0; 
}


int main(){
float salario[5];
int matricula[5];    
    
    
    preenchesalario(salario,matricula);
     
    return 0;
 }
float salario[5];
int matricula[5];    
    
    
    preenchesalario(salario,matricula);
     
    return 0;
 }