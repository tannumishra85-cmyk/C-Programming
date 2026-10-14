#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int choice;

    while(1){
    system("cls");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit");
    printf("\nEnter your choice :");
    scanf("%d", &choice);

    

    switch(choice)
    {
        case 1: 
        {   
            int n1 , n2;
            printf("\nEnter two number for addition :");
            scanf("%d%d",&n1,&n2);
            printf("\nSum is %d", n1 + n2);
            getch();
            break;
        }
        case 2 : 
        {
            int n1, n2;
            printf("\nEnter two no for subtraction :");
            scanf("%d%d", &n1,&n2);
            printf("\nDifference is %d", n1 - n2);
            getch();
            break;
        }
        case 3 :
        {
            int n1,n2;
            printf("\nEnter two number for multiplication : ");
            scanf("%d%d", &n1 ,&n2);
            printf("\nProduct is %d:" , n1*n2);
            getch();
            break;
        }
        case 4:
        {
            int n1,n2;
            printf("\nEnter two numbers for division : ");
            scanf("%d%d", &n1,&n2);
            if(n2 == 0)
                printf("Division by 0 isn't possible");
            else
                printf("\nDivision is : %d", n1/n2);
            getch();
            break;
        }

        case 5: exit(0); // program ends with exit value 0.
        default: printf("Invaild option!");

    }
}
    
    return 0;
}