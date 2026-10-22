#include<stdio.h>

void rotate(int arr[], int n, int j, char ch);

int main(){
    int arr[] = {32, 29, 40, 12, 70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int j = 3;
    char ch = 'L';

    rotate(arr, n, j, ch);
    
    return 0;
}

void rotate(int a[], int n, int j, char ch)
{
    int i, temp;
    for(i = 0; i < n; i++)
    {
        if(ch == 'L')
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
        else if(ch == 'R')
        {
            temp = a[i];
            a[i] = a[i+2];
            a[i+2] = temp;
        } 
        
    }
    temp = a[3];
    a[3] = a[4];
    a[4] = temp;

    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);
}