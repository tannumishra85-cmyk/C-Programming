#include<stdio.h>

int main(){
    // 1 USD = 84.23 INR
    int inr;
    printf("Enter a anount(in INR) : ");
    scanf("%d", &inr);
    int usd = inr*(100/8423);
    printf("%d INR is %d USD.", inr, usd);
    return 0;
}