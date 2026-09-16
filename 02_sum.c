#include<stdio.h>

int main(){
    int num1, num2, result;
    printf("Enter two number to get sum : ");
    scanf("%d%d", &num1, &num2);
    result = num1 + num2;
    printf("Sum is = %d ", result);
    return 0;
}