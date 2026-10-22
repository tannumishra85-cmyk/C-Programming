#include<stdio.h>

void str_len(){
    char str[20] = "Tannu Mishra";
    int i;
    for(i = 0; str[i]; i++);
    printf("Length of string : %d", i);
}

void occurence(){
    char str[30] = "Tannu Mishra";
    char ch = 'n';
    int i, count = 0;
    for(i = 0;str[i]; i++)
        {
            if(str[i] == ch)
                count++;
        }
    printf("\n%c - %d times in %s.", ch, count, str);
}

void vowel(){
    char str[30] = "Tannu Mishra";
    char ch;
    int i, count = 0;
    for(i = 0; str[i]; i++)
    {
        ch = str[i];
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    printf("\n%d times vowel occured in %s", count, str);
}

void spaces(){
    char str[30] = " tannu  mishra ";
    char ch = ' ';
    int i, count = 0;
    for(i = 0;str[i]; i++)
        {
            if(str[i] == ch)
                count++;
        }
    printf("\n%d times white space in %s.",count, str);
}

void upper_case(){
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
}

void lower_case(){
    char str[30] = "TANNU MISHRA";
    int i;
    printf("\nLower case of %s\n", str);
    for(i = 0; str[i]; i++)
    {   
        if(str[i] == 32) //32 is ASCII value for white space.
            printf(" ");
        if(str[i] >= 97 && str[i] <= 122)
            printf("%c", str[i]);
        else
        {       
            str[i] = str[i] + 32;
            printf("%c", str[i]);
        }
    }
}

void reverse(){
    char str[30] = "poha";
    char r_str[30];
    int i, j = 0,l;
    for( i = 0; str[i]; i++);
    l = i;
    for(i = (l-1) ; i >= 0; i--)
    {
        r_str[j] = str[i];
        printf("%c",r_str[j]);
        j++;
    }

    r_str[j] = 32; // terminating string '\0'
    
    printf("\nReversed string of %s is %s." , str, r_str);
}

void count(){
    char str[30] = "tannumishra743@gamil.com";
    int i , a = 0, n = 0, s = 0;
    for(i = 0; str[i]; i++)
    {
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            a++;
        else if(str[i] >= 48 && str[i] <= 57)
            n++;
        else
            s++;
    }
    printf("\nIn %s :\n%d times albhabet\n%d times digits\n%d times special characters",str, a, n, s);
}

void copy(){
    char str[30] = "poha the great";
    char n_str[30];
    int i;
    for(i = 0; str[i]; i++)
        n_str[i] = str[i];
    printf("%s", n_str);
}

void first_occurence(){
    char str[30] = "tannumishra";
    int i;
    char ch = 'n';
    for(i = 0; str[i]; i++)
    {
        if(ch == str[i])
        {
            printf("first occurence of %c is %d" ,str[i], i);
            break;
        }
    }
}

int main(){

    
    upper_case();
    /*
    printf("\n");
    vowel();
    printf("\n");
    spaces();
    printf("\n");
    occurence();
    printf("\n");
    str_len();
    
    lower_case();
    
    reverse();
    count();
    copy();
    first_occurence();
    */


    return 0;
}