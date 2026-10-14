#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 65 ... 91 :
        {
            printf("\nUpper-case alphabet");
            break;
        }
        case 97 ... 122 :
        {
            printf("\nLower-case alphabet");
            break;
        }
        case 48 ... 57:
        {
            printf("\nNumeric character");
        }
        default:printf("\nSome other character.");

    }
    return 0;
}