#include<stdio.h>

int main(){
    int i , j ;
    for(int i = 1 ; i < 5 ; i++)
    {
        for(int j = 1 ; j <= (i+3) ; j++)
        {
            if((i+j) % 2 == 1)
            {   
                if((i+j) == 3)
                   printf(" ");
                else
                    printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
