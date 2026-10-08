#include<stdio.h>

int main(){
    float b_salary = 0 ;
    printf("Enter your basic-salary : ");
    scanf("%f", &b_salary);
    float d_allowance = (b_salary*40)/100;
    float house_allowance = (b_salary*20)/100;
    float g_salary = b_salary + d_allowance + house_allowance;

    printf("\nDearness allowance is : %.2f", d_allowance);
    printf("\nhouse allowance is : %.2f", house_allowance);
    printf("\nGross salary is : %.2f", g_salary);
    return 0;
}