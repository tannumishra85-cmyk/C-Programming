#include<stdio.h>

void sum_arr(int a[] , int n);
void avg_arr(int a[] , int n);
void sum_even_odd(int a[] , int n);
void greatest_arr(int a[] , int n);
void smallest_arr(int a[] , int n);

int main(){
    int a[10];
    sum_arr(a,10);
    printf("\n");
    avg_arr(a,10);
    printf("\n");
    sum_even_odd(a, 10);
    printf("\n");
    greatest_arr(a, 10);
    printf("\n");
    smallest_arr(a , 10);

    
    
    return 0;
}

void sum_arr(int a[] , int n)
{
    int i , sum = 0;
    printf("Enter %d numbers : " , n);
    for(i = 0; i < n; i++)
        scanf("%d" , &a[i]);

    for(i = 0; i < n; i++)
        sum = sum + a[i];

    printf("\nSum of all the elements is %d." , sum);
}

void avg_arr(int a[] , int n)
{
    int i , sum = 0;
    float avg;
    printf("Enter %d numbers : " , n);
    for(i = 0; i < n; i++)
        scanf("%d" , &a[i]);

    for(i = 0; i < n; i++)
        sum = sum + a[i];

    avg = (sum/n);

    printf("\nAverage of all the elements is %.2f." , avg);
}

void sum_even_odd(int a[] , int n)
{
    int i , esum = 0, osum = 0;
    printf("Enter %d numbers : " , n);
    for(i = 0; i < n; i++)
        scanf("%d" , &a[i]);

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            esum = esum + a[i];
        else
            osum = osum + a[i];

    }
    printf("\nSum of all the even elements is %d." , esum);
    printf("\nSum of all the odd elements is %d", osum);
}

void greatest_arr(int a[] , int n)
{
    int i , g;
    printf("Enter %d numbers : " , n);
    for(i = 0; i < n; i++)
        scanf("%d" , &a[i]);

    g = a[0];

    for(i = 0; i < n; i++)
        {
            if(a[i] > g)
                g = a[i];
        }
    printf("\nGreatest value is %d among all elements." , g);
}

void smallest_arr(int a[] , int n)
{
    int i , s;
    printf("Enter %d numbers : " , n);
    for(i = 0; i < n; i++)
        scanf("%d" , &a[i]);

    s = a[0];

    for(i = 0; i < n; i++)
        {
            if(a[i] < s)
                s = a[i];
        }
    printf("\nSmallest value is %d among all elements." , s);
}