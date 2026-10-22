#include<stdio.h>

int main(){
    char str[30] = "Tannu mishra";
    int i;
    printf("\nUpper case of %s\n", str);
    for(i = 0; str[i]; i++)
    {
        if(str[i] == 32) //32 is ASCII value for white space.
            printf(" ");
        if(str[i] >= 65 && str[i] <= 91)// these are already in capital letter
            printf("%c", str[i]);
        else
        {
            str[i] = str[i] - 32;
            printf("%c", str[i]);
        }
    }

    return 0;
}