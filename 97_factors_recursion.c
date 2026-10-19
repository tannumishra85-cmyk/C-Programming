#include<stdio.h>

int factors(int n);

int main()
{
    factors(16);
    return 0;
}

int factors(int n)
{
    int j, d, q;

    if(n == 1)
        return 1;

    for(j = 2; j <= n; j++)
    {
        if(n % j == 0)
        {
            d = j;
            q = n / d;
            printf("%d ", d);
            return factors(q);
        }
    }
}
