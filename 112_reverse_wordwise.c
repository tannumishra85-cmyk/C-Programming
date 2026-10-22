#include<stdio.h>

int main(){
    char str[30] = "hi tannu mishra";
    int i , j , s = 0,e = (-1);

    for(i = 0; str[i]; i++)
    {
        for(j = s ; (str[j]!=32) && (str[j]) ; j++);
        e = j;
        for(j = e-1 ; j >= s; j--)
            printf("%c", str[j]);
        printf("%c" , str[e]);
        s = e+1 ;
    }
    return 0;
}