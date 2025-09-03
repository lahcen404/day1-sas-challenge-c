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
   
    for (int i = 0; i < nElemnt; i++)
    {
        printf("\n %d \n",table[i]);
    }
    
}