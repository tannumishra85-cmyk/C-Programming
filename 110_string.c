#include<stdio.h>

void isPalindrome(char str[]);
char* trim(char str[]);

int main(){
    char str[30] = "ata";
    char t_str[30] = "   t an nnu ";
    isPalindrome(str);

    printf("\nBefore triming : %s", t_str);
    printf("\nAfter triming : %s", trim(t_str));
    
    return 0;
}


void isPalindrome(char str[]){
    char r_str[30];
    int i, j = 0,l , flag = 0;

    for( i = 0; str[i]; i++);
    l = i; // length of string....

    for(i = (l-1) ; i >= 0; i--)
    {
        r_str[j] = str[i];
        j++;
    }

    r_str[j] = '\0'; // terminating the reversed string.. 


    //printf("%s" , r_str);
    
    for(i = 0 ; str[i]; i++){
        if(str[i] == r_str[i])
            continue;
        else 
            flag = 1;
    }

    if(flag == 0)
        printf("\n%s is palindrome string.", str);
    else
        printf("\n%s isn't palindrome string.", str);
}

char* trim(char str[])
{
    int i, j = 0;
    char t_str[30];

    for(i = 0; str[i]; i++)
    {
        t_str[i] = str[i];
        str[i] = 32; // 
    }

    for(i = 0; str[i]; i++)
    {
        if(t_str[i] == 32)
            continue;
        else
        {
            str[j] = t_str[i];
            j++;
        }
        
    }

    str[j] = 32; // terminating string '\0' > 32

    return str;
}


