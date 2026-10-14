#include<stdio.h>

int main(){
    int i , j ;
    char k;
    for(int i = 1 ; i < 5 ; i++)
    {
        k = 'A';
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
                    printf("%c" , k--);
                else
                {
                    printf("%c" , k);
                    k++;
                }
           }
        }
        printf("\n");
    }
    return 0;
}