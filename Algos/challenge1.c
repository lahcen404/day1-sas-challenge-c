#include <stdio.h>
#define size 10

int main() {
    
    int tab[size]={5,1,2,7,9,3,4,2,1,9};

    printf("Table before :");
     for (int i = 0; i < size; i++)
    {
        printf("%d ",tab[i]);
    }
    

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
        if (tab[j]>tab[j+1])
        {
            int temp = tab[j];
            tab[j]=tab[j+1];
            tab[j+1]=temp;
        }
        
    }
    
  }
  
    
    printf("\nTable after :");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",tab[i]);
    }
    
    
    return 0;
}