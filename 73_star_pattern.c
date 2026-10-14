#include<stdio.h>

int main(){
    int i , j ;
    for(int i = 1 ; i < 5 ; i++)
    {
        for(int j = 1 ; j <= 7 ; j++)
        {
            if((j+i >= 6) && (j-i) < 3)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}