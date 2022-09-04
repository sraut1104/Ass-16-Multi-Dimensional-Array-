// 6. Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}
                };
    int sum_rows=0,sum_clmns=0;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum_rows=sum_rows+a[i][j];
    printf("Sum of rows = %d",sum_rows);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            sum_clmns=sum_clmns+a[j][i];
    printf("\nSum of columns = %d",sum_clmns); 

    return 0;
}