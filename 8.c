// 8. Write a program in C to print or display an upper triangular matrix.

#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}
                };
    for (int i = 1; i < 3; i++)
        for (int j = 0; j <=i-1; j++)
            a[i][j]=0;

        
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }


    return 0;
}