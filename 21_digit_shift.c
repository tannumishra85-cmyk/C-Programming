#include<stdio.h>

int main(){
    int num;
    printf("Enter three digit number : ");
    scanf("%d" , &num);// let num = 135
    int n = (num % 100); // n = 35
    num = num / 100 ; // num = 1
    n = (n*10) + num;
    printf("Rotated digits by one position towards right is %d" , n);
    return 0;
}