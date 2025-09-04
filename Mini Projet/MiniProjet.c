#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 50

char titleBook[MAX][100];
char auteur[MAX][100];
float price[100];
int quantity[100];


int countBooks=0;


void toLowerStr(char str[100]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

// Add Book 

void addBook(){
char choice;
    do{
    
    printf("Enter title of book :\n");
    scanf(" %[^\n]",titleBook[countBooks]);
    getchar();

    printf("Enter auteur of book :\n");
    scanf(" %[^\n]",auteur[countBooks]);
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

// Display Books

void displayBooks(){

    if (countBooks==0)
    {
        printf("No boook avialable now !!");
    }else{
        for (int i = 0; i < countBooks ; i++)
        
        {
            printf("Boook id %d :  - ",i+1);
            printf(" %s  |  %s  |  %.2f  |  %d  |\n",titleBook[i],auteur[i],price[i],quantity[i]);
        }
        
    }
    
}

// Search Books

int searchBook(char bookSearched[100]){

    
if (countBooks==0)
    {
        printf("No boook avialable now !!\n");
        
    }else{


    int found =0;

    char lowerSearch[100] , lowerTitle[100];
    
    // toLower search inpuut
    strcpy(lowerSearch,bookSearched);
    toLowerStr(lowerSearch);
    

    for (int i = 0; i < countBooks; i++)
    {
        // toLower title
        strcpy(lowerTitle,titleBook[i]);
        toLowerStr(lowerTitle);

        if (strcmp(lowerTitle,lowerSearch)==0)
        {
    
            found=1;
            printf("Boook id %d :  - ",i+1);
            printf(" %s  |  %s  |  %.2f  |  %d  |\n",titleBook[i],auteur[i],price[i],quantity[i]);
            return i;
        }
        
        
    }
      if (found==0)
        {
            printf("Book not found !!\n");
        }

    }
    return -1;
}

// Update Quantity

void updateQuantityBook() {

    if (countBooks==0)
    {
        printf("No boook avialable now !!\n");
    }else{
    
    char titleBookUpdate[100];
    int newQuantity = 0;

    printf("Enter title book you want to update quantityy ");
    scanf(" %[^\n]", titleBookUpdate);

    int idx = searchBook(titleBookUpdate);
    if (idx != -1) {
        printf("Enter new quantity: ");
        scanf("%d", &newQuantity);
        quantity[idx] = newQuantity;
        printf("Quantity updated\n");
    }
}
}

// Total Quantitty 
void totalStock(){

    int total=0;
    for (int i = 0; i < countBooks; i++)
    {
        total+=quantity[i];

    }
      
    printf("Total of stock is :: %d",total);
}

// Delete Book

void deleteBook(){

    if (countBooks==0)
    {
        printf("No boook avialable now !!\n");
    }else{
    
    char titleBookDelete[100];
    

    printf("Enter title book you want to delete  ");
    scanf(" %[^\n]", titleBookDelete);

    int idx = searchBook(titleBookDelete);
    if (idx != -1) {

        for (int i = 0; i < countBooks; i++)
        {
            if (strcmp(titleBookDelete,titleBook[i])==0){
                
                for (int j = i; j < countBooks; j++)
                {
                    strcpy(titleBook[j],titleBook[j+1]);
                    strcpy(auteur[j],auteur[j+1]);
                    price[j]=price[j+1];
                    quantity[j]=quantity[j+1];
                }
                
                countBooks--;
                break;

            }
        
        }
        
        printf("Deleted successfully!!");
        
    }

}
}

int main() {

    int choice;
do{
    printf("\n------ Menu---------\n");
    printf("1 - Add a Book.\n");
    printf("2 - Display Books.\n");
    printf("3 - Search Book.\n");
    printf("4 - Update a Book.\n");
    printf("5 - Delete a Book.\n");
    printf("6 - Diplay Total of Book's Stock.\n");
    printf("0 -  Quit.\n");

     scanf("%d",&choice);
     getchar();

     switch (choice)
     {
     case 1:
        addBook();
        break;
    case 2:
        displayBooks();
        break;

    case 3:
        char bookSearched[100];
         printf("Enter title of the book you want to search: ");
        scanf(" %[^\n]", bookSearched);
        searchBook(bookSearched);
        break;

    case 4:
        updateQuantityBook();
        break;

    case 5:
        deleteBook();
        break;

    case 6:
        totalStock();
        break;
    case 0:
        printf("Good Bye !!");
        break;
     
     default:
        printf("Choice invalide!!");
        break;
     }
    }while (choice !=0);
    
    
}