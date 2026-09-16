#include<stdio.h>

int main(){
    int n1, n2, n3;
    float avg, result;
    printf("Enter three numbers to get it's average : ");
    scanf("%d%d%d",&n1,&n2,&n3);
    result = (n1+n2+n3)/3;
    printf("\nAverage of the numbers is %f", result);
    return 0;
}