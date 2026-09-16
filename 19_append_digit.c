#include<stdio.h>

int main(){
    int num, digit;
    printf("Enter a number and a digit respectively :");
    scanf("%d%d" , &num, &digit);
    num = num*10;
    num = num + digit;
    printf("After appending the new number is : %d" , num);
    return 0;
}