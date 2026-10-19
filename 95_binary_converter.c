#include<stdio.h>

int b_converter(int n);
int O_converter(int n);
void b_addition(int n1 , int n2);


int main(){
    O_converter(40);
    printf("\n");
    b_addition(0 , 1);
    printf("\n");
    b_converter(64);

    return 0;
}


int b_converter(int n)
{
    int r, q;

    if(n == 1)
    {
        printf("%d " , n);
        return 1;

    }
    r = n % 2;
    q = n / 2;
    b_converter(q);
    printf("%d " , r);
}


int O_converter(int n)
{
    int r, q;

    if(n < 8)
    {
        printf("%d ", n);
        return 1;
    }
    r = n % 8;
    q = n / 8;
    O_converter(q);
    printf("%d " , r);
}
    

void b_addition(int n1, int n2)
{
    int sum = 0, carry = 0;
    if((n1 == 1 && n2 == 0) || (n1 == 0 && n2 == 1))
        sum = 1;
    else if(n1 == 1 && n2 == 1){
        sum = 1 ;
        carry = 1;
    }

    printf("%d %d", sum ,carry);

}