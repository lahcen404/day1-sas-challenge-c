#include <stdio.h>

#define MAX 100

typedef struct
{
    char name[MAX];
    char phone[11];
    char email[MAX];
} Contact;

Contact contact[MAX];
int countContacts = 0;

// add a contact

void addContact()
{

    char choice;
    do
    {

        printf("Enter name of contact :");
        fgets(contact[countContacts].name, sizeof(contact[countContacts].name), stdin);


        printf("Enter phone of contact :");
        fgets(contact[countContacts].phone, sizeof(contact[countContacts].phone), stdin);

        printf("Enter email of contact :");
        fgets(contact[countContacts].email, sizeof(contact[countContacts].email), stdin);

        countContacts++;

        printf("Do you want to add another contact (y / n):");
        scanf("%c",&choice);
        getchar();

    } while (choice == 'y');

}

void displayContact()
{

    printf("--------- Contact List ---------\n");
    for (int i = 0; i < countContacts; i++)
    {
        printf("--------- Contact %d ---------\n", i + 1);
        printf("| Contact name : %s \n| Contact phone : %s \n| Contact email : %s", contact[i].name, contact[i].phone, contact[i].email);
        printf("------------------------\n");
    }
}

int main()
{

    addContact();
    displayContact();
}