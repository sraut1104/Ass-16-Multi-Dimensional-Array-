/* 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.

[Considering a definition of Sparse where a matrix is considered sparse if the number of 0s is more than half of the elements in the matrix] */

#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of row & column of matrice: ");
    scanf("%d%d",&m,&n);
    
    int a[m][n];
    printf("Enter the elements of %dx%d matrices:\n",m,n);
    for ( int i = 0; i<m; i++)
        for (int  j = 0; j<n; j++)
            scanf("%d",&a[i][j]);
    
    int count0=0,count=0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if(a[i][j]==0)
                count0++;
            else
                count++;
    if(count0>count)
        printf("Yes,given matrice is Sparse matrice");

    return 0;
}