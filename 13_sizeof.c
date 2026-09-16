#include<stdio.h>
#include<stdbool.h>
int main(){
    char ch = 'A';
    char c = '7';
    int n = 90;
    int y = 23;
    float f = 3.14;
    bool b = '1';
    printf("Size of %c is %d bytes", ch, sizeof(ch));
    printf("\nSize of %c is %d bytes", c, sizeof(c));
    printf("\nSize of %d is %d bytes", n, sizeof(n));
    printf("\nSize of %d is %d bytes", b, sizeof(b));
    printf("\nSize of %d is %d bytes", y, sizeof(y));
    printf("\nSize of %2f is %d bytes", f , sizeof(f));
    

    return 0;
}

// <stdbool.h> is basically a convenience header that gives you readable names (bool, true, false)
// instead of writing _Bool, 1, and 0.
// Even without including <stdbool.h>,
// the type _Bool is built into the C language since C99.