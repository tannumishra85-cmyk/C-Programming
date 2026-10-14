#include<stdio.h>

int main(){
    int i , j ;
    for(int i = 1 ; i < 5 ; i++)
    {
        for(int j = 1 ; j <= (8-i) ; j++)
        {
            if(j<=(i-1))
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}
