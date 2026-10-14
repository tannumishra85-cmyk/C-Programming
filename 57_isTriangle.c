#include<stdio.h>

int main(){
    int a1,a2,a3 ;
    printf("Enter three angles of the triangle  : ");
    scanf("%d%d%d" , &a1, &a2 , &a3);
    int result = a1 + a2 + a3;
    if(result == 180)
        printf("Valid tringle");
    else
        printf("Invalid triangle");

    return 0;
}