#include<stdio.h>

int main(){
    float cp, sp, profit = 0, loss = 0;
    printf("Enter cost-price : ");
    scanf("%f", &cp);
    printf("Enter selling-price : ");
    scanf("%f", &sp);
    if(cp < sp){
        profit = sp - cp;
        float profit_per = (profit/cp)*100;
        printf("Profit is %f and profit percentage is %f", profit, profit_per);
    }
    else{
        loss = cp - sp;
        float loss_per = (loss/cp)*100;
        printf("Loss is %f and loss percentage is %f", profit, loss_per);
    }
    return 0;
}
    
