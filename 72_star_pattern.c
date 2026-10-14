#include<stdio.h>

int main(){
    int i , j , k;
    for(int i = 1 ; i <= 5 ; i++)
    {
        k = 1;
        for(int j = 1 ; j <= (i+4) ; j++)
        {
            if((i+j) > 4)
            {   
                if((i+j) % 2 == 0)
                {
                    if(j>4)
                        printf("%d" , k--);
                    else
                    {
                        printf("%d" , k);
                        k++;
                    }
                }
                else
                    printf(" ");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}