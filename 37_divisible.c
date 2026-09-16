#include<stdio.h>

int main(){
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    if(num%3==0 && num%7==0)
        printf("%d is divisile by both 5 and 7", num);
    else if(num%3==0)
        printf("%d is divisible by 3", num);
    else if(num%7 == 0)
        printf("%d is divisible by 7.", num);
    else
        printf("%d is not divisile by 3 and 7.",num);
    
    return 0;
}