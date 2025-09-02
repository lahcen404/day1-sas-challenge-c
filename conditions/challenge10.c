#include <stdio.h>
#include <string.h>

int main() {

    char day[31];
    char month[12];
    char year[10000];

    printf("entre a day : \n");
    scanf("%s",day);
    printf("entre month : \n");
    scanf("%s",month);
    printf("entre year : \n");
    scanf("%s",year);

   if(strcmp(month, "01") == 0){
        printf("%s/January/%s",day,year);
    }else if (strcmp(month, "02") == 0) {
        printf("%s/February/%s",day,year);
    }else if (strcmp(month, "03")== 0){
        printf("%s/March/%s",day,year);
     }else if (strcmp(month, "04")== 0){
        printf("%s/April/%s",day,year);
    }else if (strcmp(month, "05")== 0){
        printf("%s/May/%s",day,year);
    }else if (strcmp(month, "06")== 0){
        printf("%s/June/%s",day,year);
    }else if (strcmp(month, "07")== 0){
        printf("%s/July/%s",day,year);
    }else if (strcmp(month, "08")== 0){
        printf("%s/Augustt/%s",day,year);
    }else if (strcmp(month, "09")== 0){
        printf("%s/Septembre/%s",day,year);
    }else if (strcmp(month, "10")== 0){
        printf("%s/octobre/%s",day,year);
    }else if (strcmp(month, "11")== 0){
        printf("%s/Novembre/%s",day,year);
    }else if (strcmp(month, "12")== 0){
        printf("%s/december/%s",day,year);
    }else{
        printf("it''s not a month!!");
    }


}