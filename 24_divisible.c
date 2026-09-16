#include<stdio.h>

int main(){
    int number, digit;
    printf("Enter a number : ");
    scanf("%d", &number);
    printf("Enter a digit to check number is divisible or not by this digit : ");
    scanf("%d", &digit);
    if(number%digit == 0)
        printf("%d is divisible by %d.", number, digit);
    else
        printf("%d is not divisible by %d.", number, digit);
    return 0;
}