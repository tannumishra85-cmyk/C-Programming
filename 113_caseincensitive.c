#include<stdio.h>

int main(){
    char s1[20] = "yyynn";
    char s2[20] = "TAnNu";
    int l1, l2 , i;
    for(i = 0; s1[i]; i++);
    l1 = i;
    for(i = 0; s2[i]; i++);
    l2 = i;
    if(l1 == l2)
    {
        for(i = 0; s1[i]; i++)
        {
            if((s1[i] == s2[i]) || (s1[i] == s2[i] + 32) || (s1[i] + 32 == s2[i]))
                printf("%c - %c " ,s1[i], s2[i]); 
            else
                break;
        }
        if(i == l1)
            printf("Both strings are same.");
        else
            printf("They are different strings.");
    }
    else
        printf("They are different in length.");
}