#include<stdio.h>

int main(){
    int rad;
    float result;
    printf("Enter radius: ");
    scanf("%d", &rad);
    result = 2*3.14*rad;
    printf("Circumfrence of the circle is : %f", result);
    return 0;
}