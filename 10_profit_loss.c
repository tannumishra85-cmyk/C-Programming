#include<stdio.h>

int main(){
    int cp, sp;
    float profit;
    printf("Enter cost prize and selling prize respectively : ");
    scanf("%d%d", &cp, &sp);
    profit = sp - cp ;
    printf("Profit upon selling 25 banana is %f", (25*profit));
    return 0;
}