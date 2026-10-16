#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice, n;
    while(1)
    {
        printf("\n1. Calculate LCM of two numbers.");
        printf("\n2. Calculate sum of the digits of a number.");
        printf("\n3. Volume of a cuboid.");
        printf("\n4. Check whether a given number is Prime or not.");
        printf("\n5. Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : 
            {
                // code here
            }
            case 2:
            {
                int sum = 0;
                printf("\nEnter a number to get sum of digits of that number : ");
                scanf("%d" , &n);
                while(n>0)
                {
                   sum = sum + (n%10);
                   n = n/10; 
                }
                printf("\nSum of digits of %d is %d" , n , sum);
                break;
            }
            case 3:
            {
                int l , b , h;
                printf("\nEnter length, breadth and height respectively :");
                scanf("%d%d%d" , &l , &b ,&h);
                printf("\nVolume of cuboid is %d\n", (l*b*h));
                break;
            }
            case 4:
            {
                int count = 0;
                printf("\nEnter a number : ");
                scanf("%d" , &n);
                for(int i = 1 ; i<=n ;i++)
                {
                    if(n%i == 0)
                        count++;
                }
                if(count > 2)
                    printf("\n%d is not a prime number." , n);
                else
                    printf("\n%d is a prime number." , n);
                break;
            }
            case 5:
            {
                printf("\nEnd of program!!");
                exit(0);
            }
            default: printf("\nInvalid choice!");
        }
    }
    return 0;
}