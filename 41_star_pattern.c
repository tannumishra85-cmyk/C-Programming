#include<stdio.h>

int main(){
    int i , j ;
    for(i = 5 ; i <= 5; i--){
        if(i == 0) // else 1st for loop become infinite loop.
            break;
        for(j = 1 ; j <= 5; j++){
            if(i>=j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}