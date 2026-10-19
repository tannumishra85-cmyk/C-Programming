#include<stdio.h>

void sorting(int a[], int n);
void sec_largest(int a[] , int n);
void sec_smallest(int a[] , int n);
void copy(int a[] , int n);
void nsorting(int a[], int n);
int greatest(int a[], int n);
int smallest(int a[], int n);

int main(){
    int a[10]; // 23 12 45 65 21 66 78 97 54 32
    int arr[] = {45 ,65 ,21 ,66 ,78 ,97 ,54 ,32};
    int n = sizeof(arr)/sizeof(arr[0]); 


    /*
    sorting(a, 10);
    printf("\n");
    sec_largest(a, 10);
    printf("\n");
    sec_smallest(a, 10);
    copy(a, 10);
    printf("\nGreatest value is : %d.", greatest(arr, n));
    printf("\nSmallest value is : %d.", smallest(arr, n));
    */

    nsorting(arr, n);


    return 0;
}

void sorting(int a[], int n)
{
    int i, j, temp;
    printf("Enter %d numbers : " , n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i] < a[j]) // sort in increasing order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else
                continue;
        }
    }

    for(i = 0; i < n; i++)
        printf("%d " , a[i]);
}

void sec_largest(int a[], int n)
{
    int i, j, temp;
    printf("Enter %d numbers : " , n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i] > a[j]) // sort in decreasing order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else
                continue;
        }
    }

    printf("\nSecond largest among them is : %d " , a[1]);
}

void sec_smallest(int a[], int n)
{
    int i, j, temp;
    printf("Enter %d numbers : " , n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j > n; j++)
        {
            if(a[i] > a[j]) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else
                continue;
        }
    }

    printf("\nSecond smallest among them is : %d " , a[1]);
}

void copy(int a[] , int n)
{
    int b[n];
    int i;
    printf("Enter %d numbers : ", n);
    for(i = 0; i < n; i++)
        scanf("%d" , &a[i]);

    for(i = 0 ; i < n; i++)
    {
        b[i] = a[i];
    }

    printf("Elements copied into new array : " );
    for(i = 0; i < n; i++)
        printf("%d " , b[i]);
}

int greatest(int a[], int n)
{
    int i, g;

    g = a[0];

    for(i = 0; i < n; i++)
        {
            if(a[i] > g)
                g = a[i];
        }
    return g;
}

int smallest(int a[] , int n)
{
    int i, s;

    s = a[0];

    for(i = 0; i < n; i++)
        {
            if(a[i] < s)
                s = a[i];
        }
    return s;
}

void nsorting(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i] < a[j]) // sort in increasing order
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else
                continue;
        }
    }

    for(i = 0; i < n; i++)
        printf("%d " , a[i]);

}