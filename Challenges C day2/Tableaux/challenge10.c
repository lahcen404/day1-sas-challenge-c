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

   int elemntSearched =0;
   printf("Enter  element to search  :");
    scanf("%d",&elemntSearched);

    int found = 0;
    for (int i = 0; i < nElemnt; i++)
    {
        if (elemntSearched==table[i])
        {
            found=1;
        }
        
    }
    
    if (found==1)
    {
        printf("Exist");
    }else{
        printf("Not exist");
    }
    

    return 0;
}