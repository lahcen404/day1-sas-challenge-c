#include <stdio.h>

int main() {
    char nom [20];
    char prenom [20];
    int age;
    char sexe [20];
    char mail [50];


    printf("Entrer votre nom :");
    scanf("%s",nom);

    printf("Entrer votre prenom :");
    scanf("%s",prenom);

    printf("Entrer votre age :");
    scanf("%d",&age);
    getchar();

    printf("Entrer votre sexe :");
    scanf("%s",sexe);

    printf("Entrer votre mail :");
    scanf("%s",mail);

    printf("Bonjour votre nom est %s \n ,prenom est %s , \n age est %d \n , sexe est %s , mail est : %s" , nom,prenom,age,sexe,mail);

    return 0;
}
