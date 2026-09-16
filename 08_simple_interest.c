#include<stdio.h>

int main(){
    float p, r, t;
    float result;
    printf("Enter Principle, Rate, and time respectively : ");
    scanf("%f%f%f", &p,&r,&t);
    result = (p*r*t)/100;
    printf("Simple Interest is %f rs", result);
    return 0;
}