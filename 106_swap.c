#include<stdio.h>

void swap(int a[], int n, int ind1, int ind2);
int duplicate_founder(int a[], int n);

int main(){
    int n, i , ind1, ind2;
    printf("Size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter %d elements of the array : ",n);
    for(i = 0; i < n ; i++)
        scanf("%d", &arr[i]);

    printf("\nIndexes that you want to swap between 0 to %d : ", n);
    scanf("%d%d", &ind1, &ind2);


    swap(arr,n,ind1 , ind2);
    
    return 0;
}

void swap(int a[] , int n, int ind1, int ind2)
{
    int i, temp = 0;
    temp = a[ind1];
    a[ind1] = a[ind2];
    a[ind2] = temp;

    for(i = 0; i<n ; i++)
        printf("%d ", a[i]);
}


int duplicate_founder(int a[], int n)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            
        }
    }
}