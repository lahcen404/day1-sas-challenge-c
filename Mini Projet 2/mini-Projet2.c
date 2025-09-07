#include <stdio.h>
#include <string.h>
#include <ctype.h> //toLower

#define MAX 100

typedef struct
{
    char name[MAX];
    char phone[12];
    char email[MAX];
} Contact;

Contact contact[MAX];
int countContacts = 0;

// toLower Function
void toLowerStr(char str[100]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

// add a contact

void addContact()
{

    char choice;
    do
    {

        printf("Enter name of contact :");
        fgets(contact[countContacts].name, sizeof(contact[countContacts].name), stdin);
        contact[countContacts].name[strcspn(contact[countContacts].name, "\n")] = '\0'; // removee enter key from the end 


        printf("Enter phone of contact :");
        fgets(contact[countContacts].phone, sizeof(contact[countContacts].phone), stdin);
        contact[countContacts].phone[strcspn(contact[countContacts].phone, "\n")] = '\0';

        printf("Enter email of contact :");
        fgets(contact[countContacts].email, sizeof(contact[countContacts].email), stdin);
        contact[countContacts].email[strcspn(contact[countContacts].email, "\n")]= '\0';

        countContacts++;

        printf("Do you want to add another contact (y / n):");
        scanf("%c",&choice);
        getchar();

    } while (choice == 'y' || choice== 'Y');

}

// display contacts 

void displayContact()
{

    printf("--------- Contact List ---------\n");
    for (int i = 0; i < countContacts; i++)
    {
        printf("--------- Contact %d ---------\n", i + 1);
        printf("| Contact name : %s \n| Contact phone : %s \n| Contact email : %s", contact[i].name, contact[i].phone, contact[i].email);
        printf("\n------------------------\n");
    }
}

// search contact 

int searchContact(char nameContactSearch[MAX]){

    char nameContactSearchLower[MAX];
    char nameContactLower[MAX];

    printf("Entre name of contact you want to search :");
    scanf("%s",nameContactSearch);
    getchar();


    strcpy(nameContactSearchLower,nameContactSearch);
    toLowerStr(nameContactSearchLower);


    for (int i = 0; i < countContacts; i++)
    {

        strcpy(nameContactLower,contact[i].name);
        toLowerStr(nameContactLower);

       if (strcmp(nameContactSearchLower,nameContactLower)==0)
       {
        printf("Contact Found !\n");
         printf("--------- Contact %d ---------\n", i + 1);
        printf("| Contact name : %s \n| Contact phone : %s \n| Contact email : %s", contact[i].name, contact[i].phone, contact[i].email);
        printf("\n------------------------\n");
        return i;
       
       
    }
}

    printf("Contact not found !!!\n");
    return -1;


}

void modifyContact(char nameContact[MAX]){

    char newPhone[MAX];
    char newEmail[MAX];

      int index =0;
    index = searchContact(nameContact);
    printf("index :%d \n",index);


    if (index == -1)
    {
        printf("Contact name not found !");
    }else{

        printf("Enter new phone number :\n");
        fgets(newPhone,sizeof(newPhone),stdin);

        printf("Enter new email :\n");
        fgets(newEmail,sizeof(newEmail),stdin);

        strcpy(contact[index].phone,newPhone);
        strcpy(contact[index].email,newEmail);

        printf("Contact Modified successfully !!\n");
        
    }
    

}

int main()
{

    int choice;
    char contactName[MAX];



    do
    {
        printf("1 - Add Contact \n");
        printf("2 - Modify Contact \n");
        printf("3 - Delete Contact \n");
        printf("4 - Diplay Contacts \n");
        printf("5 - Search Contact \n");
        printf("6 - Quit \n");

        printf("Enter ur choice :\n");
        scanf("%d",&choice);
        getchar();

        if (choice < 0 || choice>6)
        {
            printf("Invalide choice , try agaiin!!\n");
        }

        switch (choice)
        {
        case 1:
           addContact();
            break;

        case 2:
        modifyContact(contactName);
            break;    

        case 3:
            break;

        case 4:
           displayContact();
            break; 
            
        case 5:
        searchContact(contactName);
            break;  
            
        case 6:
        printf("Good Bye !!");
            break;    
        
        default:
            break;
        }
        

    } while (choice != 6 );
    
}