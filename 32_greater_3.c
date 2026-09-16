#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter three no : ");
    scanf("%d%d%d", &x,&y,&z);
    if(x==y && y==z) 
        printf("\n%d comes three times.", y);
    if(x == y)
        printf("\n%d comes two times.", y);
    if(y == z)
        printf("\n%d comes two times.", y);
    if( x > y && x > z)
        printf("\n%d is greater than others", x);
    else if(y > x && y > z)
        printf("\n%d is greater than others.",y);
    else 
        printf("\n%d is greater than others.", z);

    return 0;
}