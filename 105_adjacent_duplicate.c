#include<stdio.h>

int check(int a[], int n);
int count_duplicate(int a[], int n);
void unique_ele(int a[], int n);
void merge_arr(int a[], int b[], int n);
void frequency(int a[], int n);

int main()
{
    int arr[] = {1, 3, 4, 5, 7};
    int arr1[] = {2, 0, 8 , 6, 9};

    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Duplicate adjacent element : %d" , check(arr, n));
    printf("\nNumber of dupilicate numbers : %d ",count_duplicate(arr,n));

    unique_ele(arr, n);
    merge_arr(arr, arr1 , n);

    printf("\n");
    int a[] = {3, 3, 4, 4, 5, 1, 3, 0};
    int m = sizeof(a)/sizeof(a[0]);
    frequency(a, m);

    return 0;

}

int check(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(a[i] == a[i+1])
            return a[i];
    }
    if(i == (n-1))
        printf("\nNo duplicate adjacent found ");
    return 0;
}

int count_duplicate(int a[], int n)
{
    int i, j, count = 0;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                count++;
        }
    }
    return count;
}

void unique_ele(int a[], int n)
{
    int i, j, flag;
    printf("\nUnique elements of the array : ");
    for(i = 0; i < n; i++)
    {
        flag = 0;
        for(j = 0; j < n; j++)
        {
            if(i == j)
                continue;
            if(a[i] == a[j])
                flag = 1;
        }
        if(flag == 0)
            printf("%d ", a[i]);        
    }
    
}

void merge_arr(int a[] , int b[] , int n)
{
    int i , j, temp;
    int arr[2*n];
    for(i = 0; i < (2*n); i++)
    {   
        if(i < n)
            arr[i] = a[i];
        else
            arr[i] = b[i-n];
    }


    for(i = 0; i < (2*n); i++)
    {
        for(j = 0; j < (2*n); j++)
        {
            if(arr[i] > arr[j]) // sort in decreasing order
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else
                continue;
        }
    }
    printf("\nMerged + Sorted array is : ");
    for(i = 0 ; i < (2*n) ; i++)
        printf("%d ", arr[i]);
}

void frequency(int a[], int n)
{
    int i, j, count, flag;
    for(i = 0; i < n; i++)
    {
        flag = 0;

        // checking whwther digit was already checked 
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
            
        if(flag == 1)
            continue;

        count = 1;

        // counting remaining occurences 
        for(j = i + 1; a[j]; j++)
        {
            if(a[i] == a[j])
                count++;  
        } 
        printf("\n%d -> %d times", a[i], count);
    }
}