#include<stdio.h>

int main(){
    int num;
    printf("Enter number : ");
    scanf("%d", &num);
    if(num < 0)
        printf("%d" , (-1*num));
    else
        printf("%d" , num);
    
    return 0;
}