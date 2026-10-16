#include<stdio.h>

int isMatch(int num, int n);

int main(){
    int res = isMatch(1234 , 3);
    printf(res == 1 ? "Found" : "Not found");
    
    return 0;
}

int isMatch(int num , int n)
{
    while(num!=0)
    {
        int flag ;
        flag = num % 10;
        if(flag%10 == n)
            return 1;
        num = num/10;
    }   
    return 0;
}