#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    if(num&1 == 1) 
    // and operation on num and 1 that is..
    // if num is  7 then num become 111 & 001 will be 001 so, 7 is an odd number.
        printf("%d is an odd number.", num);
    else
        printf("%d is an even number.", num);
    return 0;
}