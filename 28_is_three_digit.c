#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if((num/100)>= 1 && (num/100)<10)
        printf("Yes.. %d is 3 digit number.",num);
    else    
        printf("No.. %d is not 3 digit number.",num);
    return 0;
}