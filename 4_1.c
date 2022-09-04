// 4. Write a program in C to find the sum of right diagonals of a matrix.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the one value for both the row & column: ");
    scanf("%d",&n);
    
    int a[n][n];
    printf("Enter the elements of %dx%d matrices:\n",n,n);
    for ( int i = 0; i<n; i++)
        for (int  j = 0; j<n; j++)
            scanf("%d",&a[i][j]);

    int sum=0;
    for (int i = 0; i < n; i++)
            sum=sum+a[i][n-1-i];

    printf("sum of right diagonals = %d",sum);

    return 0;
}