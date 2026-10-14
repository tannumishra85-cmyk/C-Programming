#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice , a1 ,a2, a3 ;
    while(1)
    {
        printf("\n1. Isosceles triangle.");
        printf("\n2. Right angled triangle.");
        printf("\n3. Equilateral triangle.");
        printf("\n4. Exit");
        printf("\nEnter your choice : ");
        scanf("%d" , &choice);

       

        switch(choice)
        {
            case 1 : 
            {
                printf("\nEnter angles of triangle : ");
                scanf("%d%d%d" , &a1, &a2 , &a3);
                if((a1+a2+a3) == 180)
                {
                    if(a1==a2 || a2==a3 || a3==a2)
                        printf("Triangle is isosceles.");
                    else
                        printf("Not an isosceles triangle.");
                }
                else
                    printf("Invalid triangle.");
                break;
            }
            case 2:
            {
                printf("\nEnter angles of triangle : ");
                scanf("%d%d%d" , &a1, &a2 , &a3);
                if((a1+a2+a3) == 180)
                {
                    if(a1==90 || a2 == 90 || a3==90)
                        printf("Triangle is right angled.");
                    else
                        printf("Not a right angled triangle.");
                }
                else
                    printf("Invalid triangle.");
                break;

            }
            case 3:
            {
                printf("\nEnter angles of triangle : ");
                scanf("%d%d%d" , &a1, &a2 , &a3);
                if((a1+a2+a3) == 180)
                {
                    if(a1 == a2 && a2== a3)
                        printf("Triangle is equilateral\n");
                    else
                        printf("Not an equilateral triangle.");
                }
                else
                    printf("\nInvalid triangle.");
                break;
            }
            case 4: exit(0);
            default: printf("Invalid choice!");
        }
    }
    return 0;
}