#include <stdio.h>
#include <stdbool.h>

int main(){

        int tab[10]={1,2,3,4,5,6,6,8,9,10};
        bool isFound=false;
        

        for (int i = 0; i < 9; i++)
        {
            if (tab[i] == tab[i+1])
            {
                isFound=true;
            }
            
        }
        
        if(isFound){
            printf("yes Duplicate !!");
        }else{
            printf("no duplicate");
        }

}