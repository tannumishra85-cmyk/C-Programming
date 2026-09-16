#include<stdio.h>

int main(){
    int n1 , n2;
    printf("Enter two number : ");
    scanf("%d%d", &n1,&n2);
    if(n1 > n2)
        printf("%d is greater than %d", n1 , n2);
    else if(n1 < n2)
        printf("%d is greater than %d", n2, n1);
    else
        printf("both are same that is %d" , n1);
    return 0;
}