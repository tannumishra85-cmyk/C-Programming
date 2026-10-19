#include<stdio.h>

int factorial(int n);
int series(int n);

int main(){
    printf("%d" , series(5));
    return 0;
}

int factorial(int n)
{
    int fact = 1;
    while(n>0)
    {
        fact = fact * (n);
        n--;
    }
    return fact;
}

int series(int n)
{
    int sum = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        sum = sum + factorial(i)/i;
    }
    return sum;
}