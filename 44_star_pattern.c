#include<stdio.h>

int main(){
    int i , j ,k = 1;
    for(i = 1 ; i < 5; i++)
    {
        for(j = i ;  ; j--)
        {
            if(j <= 0)
                break;
            printf("%d ", j);
        }
             printf("\n");
    }
   return 0;
}