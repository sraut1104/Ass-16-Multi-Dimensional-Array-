// 3. Write a program in C to find the transpose of a given matrix.

#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}
                };
    int b[3][3];

    for ( int i = 0; i<=2; i++)
        for (int  j = 0; j<=2; j++)
            b[j][i]=a[i][j];
    
    for ( int i = 0; i<=2; i++)
    {
        for (int  j = 0; j<=2; j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    return 0;
}