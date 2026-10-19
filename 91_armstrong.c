#include<stdio.h>

void isArmstrong(int num);
int armstrongBet(int n1, int n2);

int main(){

    //isArmstrong(153);

    armstrongBet(150, 200);
    return 0;
}

void isArmstrong(int num)
{
    int n = num , count = 0 , flag  = 0;
    int sum = 0 , power;

    while(num!=0)
    { 
        flag = num % 10;
        count++;
        num = num / 10;
    }

    //printf("%d" , count);

    num = n;
    while(num!=0)
    {   ;
        power = 1;
        int digit = num % 10;
        for(int i = 1; i<= count ; i++)
        {
            power = power*(digit);
        }
        sum = sum + (power);
        num = num/10;
    }

    if(sum == n)
        printf("\n%d ", n);
    
}

int armstrongBet(int n1 , int n2)
{
    int i;
    for(i = n1 ; i <= n2; i++)
    {
        isArmstrong(i);
    }
}