#include<stdio.h>

int nPrime(int n);

int main(){
    nPrime(100);
    
    return 0;
}

int nPrime(int n)
{
    int i , j;
   for(i = 2 ; i <=n ; i++)
   {
    for(j = 2 ; j <= n ; j++)
    {
        if(i == 2)
        {
            break;
        }
        else if(i % j == 0)
            break;
    }
    if(i == j)
        printf("%d " , i);
   }
}
    
