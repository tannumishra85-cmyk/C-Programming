#include<stdio.h>

int lcm_one(int n);

int main(){
    lcm_one(18);
    return 0;
}

int lcm_one(int n)
{
    int i ,j ,  d , q ;
    for(i = 1 ; ; i++)
    {
        if(n == 1)
        {
            d = n;
            break;
        }
        else 
        {
            for(j = 2 ; j <= n ; j++)
            {
                if(n % j == 0)
                {
                    d = j;
                    q = n/d;
                    n = q ;
                    printf("%d " , d);
                    break;
                }
            }
            
        }
        
    }
    printf("%d ", d);
}