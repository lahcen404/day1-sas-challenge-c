#include <stdio.h>

int main() {

     int table[]={1,2,3,4,5};
    

     int length= sizeof(table)/sizeof(table[0]);
     printf("Length of table is : %d\n",length);


     int reversed[length];

    for (int i = 0; i < length; i++)
    {
        reversed[i]=table[length-i-1];
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d",reversed[i]);
    }
    
}