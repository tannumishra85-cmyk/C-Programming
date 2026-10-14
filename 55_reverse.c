#include<stdio.h>

int main(){
    int num;
    printf("Enter a number of 5 digit : ");
    scanf("%d" , &num); // 12345
    int og = num ; // og = num = 12345
    int n_num = 0;
    n_num = ((num % 10) * 10000); //  5 x 10000 = 50000
    num = num / 10 ; // num = 1234

    n_num = n_num + ((num % 10) * 1000); // 50000 + (4 x 1000) = 54000
    num = num / 10 ; // num = 123

    n_num = n_num + ((num % 10) * 100); // 54000 + (3 x 100) = 54300
    num = num / 10 ; // num = 12

    n_num = n_num + ((num % 10) * 10); // 54300 + (2 x 10) = 54320
    num = num / 10 ; // num = 1

    n_num = n_num + ((num % 10) * 1);  // 54320 + (1 x 1) = 54321
    num = num / 10 ; // num = 0 

    if(og == n_num)
        printf("%d is palindrome number", og);
    else
        printf("%d is not a palindrome number", og);


    return 0;
}