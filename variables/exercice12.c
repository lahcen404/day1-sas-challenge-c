#include <stdio.h>

int main() {
int number ; //123
int reversed = 0;


    printf("entrer number");
    scanf("%d",&number);

reversed=(number%10)+(reversed*10); // rev = 3 
number=number/10;  // number = 12

reversed=(number%10)+(reversed*10); // rev = 32
number=number/10; // number = 1 

reversed=(number%10)+(reversed*10); // rev = 321
number=number/10; 

reversed=(number%10)+(reversed*10);



printf("reversed number is %d",reversed);

}