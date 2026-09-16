#include<stdio.h>

int main(){
    int rad;
    float result;
    printf("Enter radius:");
    scanf("%d", &rad);
    result = 3.14*rad*rad;
    printf("Area of circle is : %f", result);
    return 0;
}