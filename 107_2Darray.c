#include<stdio.h>

void summation();
void product();

int main()
{
    //summation();
    product();
}

void summation(){
    int a[3][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {5, 6, 7}
    };

    int b[3][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {5, 6, 7}
    };

    int i , j ;
    int c[3][3];

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf(" %d ", c[i][j]);
        printf("\n");
    }
    
}

void product()
{
     int a[3][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {5, 6, 7}
    };

    int b[3][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {5, 6, 7}
    };

    int i , j, k , flag = 0, sum = 0;
    int c[3][3]= {};
    
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        { 
            flag = j;
            sum = 0;  
            for(k = 0; k < 3; k++)
            {     
                  // flag = 0 
                sum = sum + (a[i][j]*b[j][i]); // 
                j++;// 1 > 2 
            }
            j = flag;
            printf("%d ", sum);
        }
        printf("\n");
    }

    /*
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }

    */
}