#include<stdio.h>

int main(){
    int i , k = 0 ;
    for(i = 1 ; i < 5 ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            k++; // finally 
            printf("%d " , k);
            
        }
        printf("\n");
       
    }
    return 0;
}