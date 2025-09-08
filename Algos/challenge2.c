#include <stdio.h>
#define SIZE 6
int main(){

    int tab[]={5,7,1,2,12,7};

    for (int i = 1; i < SIZE; i++)
    {
         int temp=tab[i];
         int j=i-1;

         while (temp < tab[j] && j>=0)
         {
            tab[j+1]=tab[j];
            j--;
         }
         tab[j+1]=temp;
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ",tab[i]);
    }
    
}