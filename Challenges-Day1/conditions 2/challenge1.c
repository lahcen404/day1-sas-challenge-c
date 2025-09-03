#include <stdio.h>

int main() {
   
    float revAnnuel;
    int scoreCredit=0;
    int dureePret=0;

    printf("entre Revenu Annuel :\n" );
    scanf("%f",&revAnnuel);

    printf("entre Score Credit :\n" );
    scanf("%d",&scoreCredit);

    printf("entre Duree pret :\n" );
    scanf("%d",&dureePret);

    if(revAnnuel >= 30000 && scoreCredit >= 700 && dureePret <= 10){
        printf("Eligible !!");
    }else if (revAnnuel >= 30000 && scoreCredit >= 650 && dureePret <= 15){
        printf("Eligible avec conditions");
    }else{
        printf("non eligible !!");
    }

}
