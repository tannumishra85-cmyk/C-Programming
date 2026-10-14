#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice, n;
    while(1)
    {
        printf("\n1. Factorial of a number.");
        printf("\n2. Check Even and Odd.");
        printf("\n3. Area of circle.");
        printf("\n4. Sum of first N natural numbers.");
        printf("\n5. Exit");
        printf("\nEnter your choice");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1 : 
            {
                printf("\nEnter a number :");
                scanf("%d",&n);
                int fact = 1;
                while(n>0)
                {
                    fact = fact * (n);
                    n--;
                }
                printf("\nFactorial = %d", fact);
                break;
            }
            case 2:
            {
                printf("\nEnter a number : ");
                scanf("%d", &n);
                if(n%2==0)
                    printf("%d is Even number",n);
                else
                    printf("%d is Odd number",n);
                break;
            }
            case 3: 
            {
                printf("Enter radius : ");
                scanf("%d", &n);
                printf("\nArea of circle : %.2f", (3.14*n*n));
                break;
            }
            case 4:
            {
                printf("Enter a number : ");
                scanf("%d" , &n);
                int sum = 0;
                for(int i = 1; i<=n ; i++)
                    sum+=i;
                printf("\nSum of %d natural number is %d" , n , sum);
                break;
            }
            case 5:
            {   
                printf("End of program");
                exit(0);
            }
            default: printf("Invalid choice!");
        }
    }
    return 0;
}