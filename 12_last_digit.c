#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Last digit of your number is %d", num%10);
    printf("\nNumber without it's last digit : %d", num/10);
    return 0;
}