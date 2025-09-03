#include <stdio.h>

int main() {

    int nombre=0;
    int multi =0;

    printf("entrer un nombre");
    scanf("%d",&nombre);

    for(int i=1 ; i<=10 ; i++){

        multi = nombre * i;

        printf("%d *  %d = %d \n", nombre,i,multi);
    }
}
