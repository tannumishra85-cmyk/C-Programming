#include<stdio.h>

int main(){
    int r , s , a ;
    printf("Enter ages of Ram, Shyam, and Ajay respectively : ");
    scanf("%d%d%d" , &r , &s , &a);
    int youngest = (r < s)? (s < a? s : a): (r < a ? r : a);
    printf("Yongest age is %d" , youngest);
    return 0;
}