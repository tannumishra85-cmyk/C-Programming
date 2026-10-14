#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 65: 
        {
            printf("\nVowel");
            break;
        }
        case 69:
        {
            printf("\nVowel");
            break;
        }
        case 73:
        {
            printf("\nVowel");
            break;
        }
        case 79:
        {
            printf("\nVowel");
            break;
        }
        case 85:
        {
            printf("\nVowel");
            break;
        }
        case 97:
        {
            printf("\nVowel");
            break;
        }
        case 101:
        {
            printf("\nVowel");
            break;
        }
        case 105:
        {
            printf("\nVowel");
            break;
        }
        case 111:
        {
            printf("\nVowel");
            break;
        }
        case 117:
        {
            printf("\nVowel");
            break;
        }
        case 66 ... 90:
        {
            printf("\nConsonant");
            break;
        }
        default: printf("Some other special character");
    }
    return 0;
}