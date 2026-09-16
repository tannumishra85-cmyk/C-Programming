#include<stdio.h>

int main(){
    int num;
    printf("Enter a no to check whether even or odd :\n");
    scanf("%d",&num);
    printf("%d",(num>>3));
    // num is divided by 2 raised to the power of 3.

    return 0;
}