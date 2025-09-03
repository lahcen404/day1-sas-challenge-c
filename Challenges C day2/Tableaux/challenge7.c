#include <stdio.h>

int main() {

    int nElemnt;
    printf("Enter nombre elements :");
    scanf("%d",&nElemnt);

    int table[nElemnt];

    for (int i = 0; i < nElemnt; i++)
    {
        printf("entrer elemnts :");
        scanf("%d",&table[i]);
    }
    
    int temp = 0;
    for (int i = 0; i < nElemnt-1; i++)
    {
        for (int j = 0; j < nElemnt-i-1 ; j++)
        {
            if (table[j] > table[j+1])
            {
                temp = table[j];
                table[j]=table[j+1];
                table[j+1]=temp;
            }
            
        }
        
    }
    
    for (int i = 0; i < nElemnt; i++)
    {
        printf("%d ",table[i]);
    }
    


}