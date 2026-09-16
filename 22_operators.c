#include<stdio.h>

int main(){
    int x;
    x = 10 > 8 > 4;
    /*it first execute 10 > 8 and gives true that is 1.
    after that remaining part will be executed that is..
    1 > 4 it gives false >> 0.
    final x will be 0.

    */
    int y;
    y=!12>-2; // 1

    /*
    
    y = (!12) > -2 not y = ! (12 > -2)
     (!non-zero = 0) and 0 > -2 is true that is 1 so, y  = 1.
    
     */

    int z;
    z = 3<0&&5>0; // z = 0&&1  so, z = 0


    printf("z is %d", z);
    printf("\nx is %d" , x);
    printf("\ny is %d", y);
    return 0;
}