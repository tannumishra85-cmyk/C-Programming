#include<stdio.h>

int main(){
    char ch;
    printf("Enter an alpbhabet :");
    scanf("%c", &ch);
    if((ch >=65 && ch <= 90))
        printf("Upper case alphabet");
    else if(ch >= 97 && ch <= 122)
        printf("Lower case alphabet");
    else
        printf("Not an alphabet");
    return 0;
}