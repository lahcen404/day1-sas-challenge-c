#include <stdio.h>

int main() {
    int num;
    int sum=0;

    printf("entre un nombre :");
    scanf("%d",&num);

    for(int i=0 ; i<=num ; i++){
        sum+=num;
    }

    printf("la somme est %d",sum);

    return 0;
}
