#include<stdio.h>

int main(){
    int i , j ;
    int k;
    for(int i = 1 ; i < 5 ; i++)
    {
        k = 1;
        for(int j = 1 ; j <= 7 ; j++)
        {
            if((j+i >= 6) && (j-i) < 3)
            {
                 printf(" ");
                 if(j>=4)
                    k--;
                else
                    k++;
            } 
            else
            {
                if(j>=4)
                    printf("%d" , k--);
                else
                {
                    printf("%d" , k);
                    k++;
                }
           }
        }
        printf("\n");
    }
    return 0;
}