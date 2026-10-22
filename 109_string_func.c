#include<stdio.h>

int vowel(char str[]);
int first_occurence(char str[], char ch);
char char_finder(char str[], char ch,int s, int e);
char* swap(char str[], int s, int n);
void isAlphanumeric(char str[]);
void frequency(char str[]);

int main(){
    char str[30] = "tannnumishra743@gmail.com";
    char s[20] = "tannu";
    char ch = 'n';
    /*
    isAlphanumeric(str);
    
    printf("\nVowel in %s is %d", str, vowel(str));
    printf("\nFirst occurence of %c in %s at %d index.", ch, str, first_occurence(str, ch));

    printf("\n%c is at index %d in %s.", ch, char_finder(str, ch, 0,5), str);

    printf("\nbefore swapping : %s", str);
    printf("\nafter swapping : %s", swap(str,0,5));
    */
    frequency(s);
    return 0;
}

int vowel(char str[])
{
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
    return count;
}


int first_occurence(char str[], char ch)
{
    int i;
    for(i = 0; str[i]; i++)
    {
        if(ch == str[i])
            return i;
    }
    return (-1);
}

char char_finder(char str[], char ch,int s, int e)
{
    int i;
    for(i = s; i<= e ;i++)
    {
        if(ch == str[i])
            return i;
    }
    return (0);
}

char* swap(char str[], int s, int n)
{
    int temp = 0;

    temp = str[s];
    str[s] = str[n];
    str[n] = temp;

    return str;
}

void isAlphanumeric(char str[])
{
    int i , count= 0;
    for(i = 0; str[i] ;i++)
    {
        if((str[i] >= 65 && str[i] <= 90) && (str[i] >= 97 && str[i] <= 122))
            count++;
        if(str[i] >= 48 && str[i] <= 57)
            count++;
    }

    if(count == 2)
        printf("\nYes %s is alphanumeric.", str);
    else
        printf("\nNo, %s isn't alphanumeric.", str);
}

void frequency(char str[])
{
    int i, j , count, flag = 0;
    for(i = 0; str[i]; i++)
    {
        flag = 0;
        for(j = 0; j < i ; j++)
            {
                if(str[i] == str[j])
                {
                    flag = 1;
                    break;
                }

            }
        if(flag == 1)
            continue;

        count = 1;
            
        for(j = i+1; str[j]; j++)
        {
            if(str[i] == str[j])
                count++;
        }   
        printf("\nFrequency of %c : %d times.", str[i], count);

    }
}