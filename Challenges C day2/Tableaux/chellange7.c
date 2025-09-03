#include <stdio.h>

int main() {

     int nElemnt;
    printf("Enter nombre elements ?!!");
    scanf("%d",&nElemnt);

    int table[nElemnt];

   for (int i = 0; i < nElemnt; i++)
   {
    printf("entre a numbeer! \n");
    scanf("%d",&table[i]);

   }
    int min = table[0];
    int max = table[0];



     for (int i = 1; i < nElemnt; i++) {
        if (table[i] < min) {
            min = table[i];
        }
        if (table[i] > max) {
            max = table[i];
        }
    }
   
    printf("max et  %d \n",max);
    printf("min et  %d \n",min);

}