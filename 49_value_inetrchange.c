#include<stdio.h>

int main(){
    int c , d;
    printf("Enter 1st number : ");
    scanf("%d", &c); // c = 10 
    printf("\nEnter 2nd number : ");
    scanf("%d" , &d); // d = 20 
    printf("\nBefore swapping 1st no -  %d and 2nd no - %d ", c , d);
    c = c + d;
    d = c - d;
    c = c - d;
    printf("\nAfter swapping 1st no -  %d and 2nd no - %d ", c , d);
    return 0;
}

