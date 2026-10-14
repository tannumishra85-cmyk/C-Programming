#include<stdio.h>

int main(){
    int k;
    for(int i = 1 ; i < 5 ; i++)
    {
        k = 1;
        for(int j = 1 ; j <= (i+3) ; j++)
        {
            if(j<=(4-i))
                printf(" ");
            else{
                printf("%d",k);
                if(j>=4)
                {  
                    k--;
                }
                else{
                     k++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}