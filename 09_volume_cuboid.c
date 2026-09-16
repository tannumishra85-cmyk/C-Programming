#include<stdio.h>

int main(){
    int l,b,h;
    printf("Enter length, breadth, and height respectively : ");
    scanf("%d%d%d", &l,&b,&h);
    printf("Volume of cuboid is %d", l*b*h);
    return 0;
}