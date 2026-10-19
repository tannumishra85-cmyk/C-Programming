#include<stdio.h>

int lcm(int n1 , int n2);
int gcd(int n1, int n2);

int main(){
    printf("%d", lcm(15, 18));
    return 0;
}

int lcm(int n1, int n2)
{
    int lcm = (n1*n2)/gcd(n1,n2);
    return lcm;
}

int gcd(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}