#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i , j , k;

    for(i=0 ; i< 50 ; i++){
        for(j=0 ; j<50 ; j++){
            for(k=0 ; k<50 ; k++){
                if (pow((i+j),2) == pow(k,2)) {
                    printf("Cateto 1 : %d Cateto 2: %d Hipotenusa: %d\n", i,j,k);
                }
            }

        }
    }
}