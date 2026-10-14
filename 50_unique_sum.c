#include<stdio.h>

// program to obtain the sum of the first and last digit of this number.

int main(){
    int num;
    printf("Enter a number of 4-digits : ");
    scanf("%d" , &num);
    int last = num%10;
    int first = num/1000;
    int sum = last + first;
    printf("\nFirst digit = %d\nLast digit = %d" , first , last);

    printf("\nSummation of first and last digit is %d" , sum);
    return 0;
}