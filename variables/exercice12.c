#include <stdio.h>

int main() {
int number ;
int reversed = 0;


    printf("entrer number");
    scanf("%d",&number);

reversed=(number%10)+(reversed*10);
number=number/10;

reversed=(number%10)+(reversed*10);
number=number/10;

reversed=(number%10)+(reversed*10);
number=number/10;

reversed=(number%10)+(reversed*10);



printf("reversed number is %d",reversed);

}