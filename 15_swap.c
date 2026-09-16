#include<stdio.h>
// swapping two numbers without using third variable..
int main(){
    int a = 1;
    int b = 20;
    printf("Before swapping value of a = %d and b = %d", a , b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping value of a = %d and b = %d", a,b);
    return 0;
}