#include <stdio.h>

int main() {

    int n;

    printf("entre un nombre :");
    scanf("%d",&n);

    if(n%2==0){
        printf("pair");
    }else{
        printf("impairee");
    }

    return 0;
}