#include<stdio.h>

int main(){
    char k , ch = 'A';
    int i , j;
    for( i = 1; i <= 5 ; i++ )
    {   

        k = ch;
        for(j = 1 ; j <= 5 ; j++){
            
            if(i <= j)
            {
                printf("%c" , k);
                k++;
            } 
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        ch++;
    }
    return 0;
}
