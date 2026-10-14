#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c" , &ch);
    ch > 97 && ch < 122 ? printf("Lower-case alphabet") : printf("Not in lower-case aplhabet.");
    
    return 0;
}