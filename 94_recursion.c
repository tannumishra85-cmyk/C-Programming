#include<stdio.h>

int RevEven(int n);
int sqNum(int n);


int main(){
    RevEven(10);
    
    printf("\n");
    sqNum(5);
    return 0;
}

int RevEven(int n)
{
    if(n >= 1)
    {
        if(n%2==0)
            printf("%d " , n);
        RevEven(n-1);
    }
    else
    {
        printf("%d ", n);
        return 0;
    }
}

int sqNum(int n)
{
    int res = 0;
    if(n == 1){
        printf("%d " , n*n);
        return (1);
    }
    sqNum(n-1); 
    printf("%d ", (n*n));
    return (n);
}