#include<stdio.h>

int fibonacci(int n);

int main(){
    fibonacci(5);
    return 0;
}

int fibonacci(int n)
{
    int sum = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        sum = sum + i;
    }
    printf("%d" , sum);
}