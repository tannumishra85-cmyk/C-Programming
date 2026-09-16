#include<stdio.h>
// swapping two number without using + , - operators..

int main(){
    int a = 1;
    int b = 20;
    printf("Before swapping value of a = %d and b = %d", a , b);
    a +=b;
    b -=a;
    b = -b;
    a +=b;

    // -------------using bitwise XOR (^)-----------
    // -------------we can make algorithm using  ^ --------
    // because a = 7 = 111
    //         b = 4 = 100
    //              ^ ------
    //                 011 >> 3 
    
    
    printf("\nAfter swapping value of a = %d and b = %d", a,b);
    return 0;
}