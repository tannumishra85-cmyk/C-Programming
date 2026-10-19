#include<stdio.h>

int nSum(int n);

int main(){
    printf("%d ",nSum(5));
    
    return 0;
}

int nSum(int n)
{
    int sum;
    if(n == 1)
        return (1);
    sum = n + nSum(n-1);
    return sum;
}