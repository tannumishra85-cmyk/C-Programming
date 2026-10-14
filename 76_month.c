#include<stdio.h>

int main(){
    int num;
    printf("Enter month number (J - 1, F - 2) : ");
    scanf("%d" , &num);
    switch(num){
        case 1 :printf("\nJanuary - 31 days");
                break;
        case 2 :printf("\nFebruary - 28 days");
                break;
        case 3 :printf("\nMarch - 31 days");
                break;
        case 4 :printf("\nApril - 30 days");
                break;
        case 5 :printf("\nMay - 31 days");
                break;
        case 6 :printf("\nJune - 30 days");
                break;
        case 7 :printf("\nJuly - 31 days");
                break;
        case 8 :printf("\nAugust - 31 days");
                break;
        case 9 :printf("\nSeptember - 30 days");
                break;
        case 10:printf("\nOctober - 31 days");
                break;
        case 11:printf("\nNovember - 30 days");
                break;
        case 12:printf("\nDecember - 31 days");
                break;
        default : printf("Invalid month number.");
    }
    return 0;
}