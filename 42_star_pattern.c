#include<stdio.h>

int main(){
    int i , j ;
    for(i = 5 ; i <= 5; i--){
        if(i == 0) // else 1st for loop become infinite loop.
            break;
        for(j = 5 ; j <= 5; j--){
            if(j == 0)
                break;
            if(i>=j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}