#include <stdio.h>

int main() {
   
    int nombre=0;
    int factorial =1 ;

    printf("entre un nombre :");
    scanf("%d",&nombre);

    for (int i =1 ; i<=nombre ; i++){
        factorial=factorial*i;

    }
    printf("%d! = %d",nombre,factorial);
}
