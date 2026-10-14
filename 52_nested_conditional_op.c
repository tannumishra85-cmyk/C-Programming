#include<stdio.h>

int main(){
    int a , b , c , big ;
    printf("Enter three integer value = ");
    scanf("%d%d%d", &a,&b, &c);
    big = (a>b ? (a>c ? a : b) : (b > c ? b : c));
    printf("%d" , big);
    return 0;
}