#include<stdio.h>

float area_circle(float r);
float si(int p, int r , int t);
int isEven(int n);


int main(){
    int result = 0;
    
    result = area_circle(5);
    printf("Area of circle is : %d " , result);

    result = si(1000,3.0,2);
    printf("\nSimple intrest is %d",result);

    result = isEven(56);
    printf(result==1 ? "\nEven number" : "\nOdd number");



    return 0;
}

float area_circle(float r) 
{
    float res = (3.14*r*r);
    return res;
}

float si(int p , int r , int t)
{
    int res = (p*r*t)/100;
    return res;
}

int isEven(int n)
{
    if(n%2 == 0)
        return 1;
    else
        return 0;
}
