#include<stdio.h>

int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d" , &year);

    // conditional operator
    ((year%4==0 && year%100!=0) || year%400==0)?printf("%d is a leap year.") : printf("%d is not a leap year.");
    return 0;
}