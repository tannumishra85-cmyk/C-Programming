#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);// let num 4567
    num = num / 10; // num = 456
    num = num*10; // numm = 4560
    printf("New number is %d that contain last digit as 0.", num);
    return 0;
}