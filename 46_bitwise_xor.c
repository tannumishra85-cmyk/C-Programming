#include<stdio.h>

int main(){
    int arr[] = {12 , 12, 14, 14 , 90 , 14, 14};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = 0 ;
    for(int i = 0; i < n ; i++)
        res ^= arr[i];
    printf("%d", res);
    return 0;
}   