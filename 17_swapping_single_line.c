#include<stdio.h>

int main(){
    int num;
    printf("Enter three digit integer number :");
    scanf("%d", &num); // let num == 135
    int sum = 0;
    sum = sum + num % 10; // sum == 5
    num = num / 10; // num == 13
    sum = sum + num % 10; // sum == 8
    num = num / 10 ; // num == 1
    sum = sum + num % 10; // sum == 9
    printf("Sum of your three digit number is %d" , sum); // final sum will be 9
    return 0;
}