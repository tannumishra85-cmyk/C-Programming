#include<stdio.h>

int main(){
    int i , j ;
    char ch;
    for(int i = 1 ; i < 5 ; i++)
    {   
        ch = 'A';
        for(int j = 1 ; j <= (8-i) ; j++)
        {
            if(j<=(i-1))
                printf(" ");
            else{
                if(j>=4)
                    printf("%c",ch--);
                else
                {
                    printf("%c", ch);
                    ch++;
                }
            }

        }
        printf("\n");
    }
    return 0;
}
