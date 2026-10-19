#include<stdio.h>

int n_odd_sum(int n);
int n_even_sum(int n);

int main(){
    printf("%d ", n_odd_sum(10));
    printf("%d ", n_even_sum(12));
    return 0;
}


int n_odd_sum(int n)
{
    int sum;
    if(n == 1)
        return 1;
    else
    {  
        if(n%2!=0)
        {
            sum = n + n_odd_sum(n-1);
            return sum;    
        }
        else
            n_odd_sum(n-1);
}
}

int n_even_sum(int n)
{
    int sum;
    if(n == 1)
        return 1;
    else
    {  
        if(n%2!=0)
        {
            sum = n + n_even_sum(n-1);
            return sum;    
        }
        else
            n_even_sum(n-1);
}
}