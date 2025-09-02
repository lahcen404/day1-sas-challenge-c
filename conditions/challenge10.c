#include <stdio.h>
#include <string.h>

int main() {

    int year, day , monthNum;
    char month[12];

    printf("entre a day : \n");
    scanf("%d",&day);
    printf("entre month : \n");
    scanf("%d",&monthNum);
    printf("entre year : \n");
    scanf("%d",&year);

   switch (monthNum)
   {
    case 1: strcpy(month, "january"); break;
    case 2: strcpy(month, "february"); break;
    case 3: strcpy(month, "march"); break;
    case 4: strcpy(month, "april"); break;
    case 5: strcpy(month, "may"); break;
    case 6: strcpy(month, "june"); break;
    case 7: strcpy(month, "july"); break;
    case 8: strcpy(month, "january"); break;
    case 9: strcpy(month, "january"); break;
    case 10: strcpy(month, "january"); break;
    case 11: strcpy(month, "january"); break;
    case 12: strcpy(month, "january"); break;

   default:
   printf(" it's not a month");
    break;
   }

    printf("Date: %d %s %d\n", day, month, year);

    return 0;

}