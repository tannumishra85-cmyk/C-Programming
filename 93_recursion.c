#include<stdio.h>

int naturalNum(int n);
int reverseNum(int n);
int RevoddNum(int n);
int oddNum(int n);
int nEven(int n);

int main()
{
    naturalNum(5);
    printf("\n");
    reverseNum(5);
    printf("\n");
    oddNum(10);
    printf("\n");
    RevoddNum(10);
    printf("\n");
    nEven(10);
    return 0;
}

int naturalNum(int n) 
{
    if(n == 1){
        printf("%d " , n);
        return (1);
    }
    naturalNum(n-1); 
    printf("%d ", n);
    return n;
}

int reverseNum(int n) 
{
    if(n == 1){
        printf("%d" , n);
        return (1);
    }
    printf("%d ", n);
    reverseNum(n-1); 
    
    return n;
}

int RevoddNum(int n)
{
    if(n > 1)
    {
        if(n%2!=0)
            printf("%d " , n);
        RevoddNum(n-1);
    }
    else
    {
        printf("%d ", n);
        return 1;
    }
}

int oddNum(int n)
{
    if(n > 1)
    {
        oddNum(n-1);
        if(n%2!=0)
            printf("%d " , n);
    }
    else
    {
        printf("%d ", n);
        return 1;
    }

}

int nEven(int n)
{
    if(n >= 1)
    {
        nEven(n-1);
        if(n%2==0)
            printf("%d " , n);
    }
    else
    {
        printf("%d ", n);
        return 0;
    }


}