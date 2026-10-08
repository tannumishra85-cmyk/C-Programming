#include<stdio.h>

int main(){
    int i , j ,k;
    for(i = 1 ; i <= 5; i++){
        for(j = 1 ; j <= 5; j++){
            for(k = j; k<=j ; k--){
                if(k == 0)
                    break;
                if(j>=i)
                    printf("%d",j);
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}