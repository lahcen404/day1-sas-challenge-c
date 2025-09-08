#include <stdio.h>

int main(){

        int tab[10]={5,4,2,7,9,3,4,1,7,9};
        int min=tab[0];

        for (int i = 1; i < 10; i++)
        {
            if (min > tab[i])
            {
                min=tab[i];
            }
            
        }
        
        printf("Min is : %d",min);
}