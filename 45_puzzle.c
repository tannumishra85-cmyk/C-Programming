#include<stdio.h>

int main(){
    int n, x, c_x = 0;
    int n1,n2,n3,n4,n5;
    int flag = 0 ;
    printf("Enter 5 digit(Integer) no :");
    scanf("%d", &n); // 12391

    x = n % 10; // x = 1 , n = 12391
    x = x + 1; // x = 2 

    if(x > 9)  // (2 > 9) - False
    {
        x = x%10; // x = 0
        c_x = x / 10; // c_x = 1
    }

    n = n / 10; // n = 1239

    n5 = x; // n5 = 2

    x = n % 10;  // x = 9 
    x = x + 1 + c_x ;  // x = 9 + 1 + 0 = 10

    
    if(x > 9)  // (10 > 9) >> True
    {
        c_x = x / 10; // c_x = 10 / 10 => 1
        x = x%10;  // x = 10 % 10 => 0
         
    }
    else{
        c_x = 0;
    }

    n4 = x; // n4 = 0
    n = n / 10 ;  // n = 123

    x = n % 10 ; // x = 3
    x = x + 1 + c_x; // x = 3 + 1 + 1 = 5

    
    if(x > 9) // (4 > 9) >> False
    {   
        c_x = x / 10; 
        x = x%10; 
       
    }

    else // executed c_x = 0
    {
        c_x = 0;
    }


    n3 = x; // n3 = 5
    n = n / 10; // 12

    

    x = n % 10;  // x = 2 
    x = x + 1 + c_x ;  // x = 2 + 1 + 0 = 3

    
    if(x > 9)  // (3 > 9) >> false
    {
        c_x = x / 10;
        x = x%10; 
        
    }
    else // executed 
    {
        c_x = 0;
    }

    n = n / 10 ; // n = 1

    n2 = x; // n2 = 3

    x = n % 10;  // x = 1
    x = x + 1 + c_x ; // x = 1 + 1 + 0 = 2

    if(x > 9) 
    {
        c_x = x / 10; //false
        x = x%10; 
       
    }
    else{
        c_x = 0;
    }

    n = n / 10 ; // n = 0

    n1 = x; // n1 = 2

    printf("%d%d%d%d%d",n1,n2,n3,n4,n5); // 23502

    return 0;
}