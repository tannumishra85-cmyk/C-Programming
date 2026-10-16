#include<stdio.h>

int nextPrime(int n);

int main(){
    printf("%d" , nextPrime(45));
    return 0;
}

int nextPrime(int n)
{
    int count = 0 , i , j;
    for(i = 1; i <= n ; i++)
    {
        for(j = 2 ; j <= (n+i) ; j++)
        {
            if((n+i)%j==0)
            {
                count++;
                break;
            }
        }
        if(j == (n+i))
        {
            break;
        }
    }
    if(count == 1)
        {
            return (n+i);
        }
}