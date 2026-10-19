#include<stdio.h>

int check(int a[], int n);
int count_duplicate(int a[], int n);
void unique_ele(int a[], int n);

int main(){
    int arr[] = {1, 3, 4, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Duplicate adjacent element : %d" , check(arr, n));
    printf("\nNumber of dupilicate numbers : %d ",count_duplicate(arr,n));
    unique_ele(arr, n);
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
        printf("\nNo duplicate adjacent found.");
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
    int i, j, flag = 0;
    printf("\nUnique elements of the array : ");
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                flag = 1;

        }

        if(flag == 0)
            printf("%d ", a[i]);
        
    }
}