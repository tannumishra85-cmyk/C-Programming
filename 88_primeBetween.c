#include<stdio.h>

int primeBet(int n1, int n2);

int main(){
    primeBet(10 , 50);
    
    return 0;
}

int primeBet(int n1 , int n2)
{
    int i , j;
   for(i = n1 ; i <= n2 ; i++)
   {
    for(j = 2 ; j <= n2 ; j++)
    {
        if(i == 2)
            break;
        else if(i % j == 0)
            break;
    }
    if(i == j)
        printf("%d " , i);
   }
}