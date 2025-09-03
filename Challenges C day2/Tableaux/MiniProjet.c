#include <stdio.h>

char titleBook[50][100];
char auteur[50][100];
float price[100];
int quantity[100];


int countBooks=0;

void addBook(){
char choice;
    do{
    
    printf("Enter title of book :\n");
    scanf("%[^\n]",titleBook[countBooks]);
    getchar();
    printf("Enter auteur of book :\n");
    scanf("%[^\n]",auteur[countBooks]);
    getchar();
    printf("Enter price of book :\n");
    scanf("%f",&price[countBooks]);
        getchar();

    printf("Enter quantity of books :\n");
    scanf("%d",&quantity[countBooks]);
        getchar();

    
    countBooks++;
    
    printf("do you want to add another book (y - n) :");
    scanf(" %c",&choice);
        getchar();

    }while (choice =='y');
    
    
}


int main() {

    addBook();
     
}