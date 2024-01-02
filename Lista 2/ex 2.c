#include <stdio.h>
#include <math.h>
int main()
{float a=1.5 , b=4 ,c=2, d=3, e=1.2, f=4.3;
 float letraA, letraB,letraC , letraD;
 float opB,somaB;
 float somaC,opC,opC2,opC3, opC4;
 float opD , opD2, opD3 ;
    
    //Letra a 
    letraA= (a*(c+d))/(b*(e+f));
    printf("Resultado letra A = %f \n",letraA);

    //Letra b
    somaB= b+c;
    opB= pow(a,somaB);
    letraB= ((opB)/(e+f))+d;
    printf("Resultado letra B = %f \n",letraB);

    //Letra c
    somaC= c+d;
    opC= pow(somaC,2);
    opC2= pow(b,2);
    opC3= (1/c);
    opC4= a+((opC/opC2)*d);
    letraC= opC4*opC3;
    printf("Resultado letra C = %f \n", letraC);
          
    // Letra d
    opD= pow(b,2);
    opD2= sqrt(opD-(4*a*c));
    opD3= 2*a;
    letraD= (-b + opD2)/opD3;
    printf("Resultado letra D = %f \n", letraD);
          
        
        
        return 0;
}