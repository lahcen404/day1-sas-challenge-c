#include <stdio.h>

int main() {

    char c;

    printf("entre a charactere : \n");
    scanf("%c",&c);

    switch (c)
    {
    case 'a' :
    case 'e' :
    case 'u' :
    case 'i' :
    case 'o' :
        printf("is a vowel");
        break;
   
    default:
        printf("is not a vowel");
        break;
    }
    return 0;
}