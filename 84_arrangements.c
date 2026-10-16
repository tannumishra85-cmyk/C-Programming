#include<stdio.h>

int arrangements(int n , int r);
int factorial(int n);


int main(){
    
    printf("%d",arrangements(5,3));
    printf("\n%d",arrangements(5,5));
    printf("\n%d",arrangements(6, 0));
    return 0;
}

int arrangements(int n, int r)
{
    if( n == r)
    {
        int res = factorial(n);
        return res;
    }
    else
    {
        int flag = factorial(n)/factorial(n-r);
        return flag;
    }
}

int factorial(int n)
{
    int flag = 1;
    if(n == 1) // base case
        return (1);
    flag = n * factorial(n-1); // recursive case
    return (flag);

}