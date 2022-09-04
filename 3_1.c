// 3. Write a program in C to find the transpose of a given matrix. [GEnaralized]

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
    
    int b[m][n];

    for ( int i = 0; i<m; i++)
        for (int  j = 0; j<n; j++)
            b[j][i]=a[i][j];
    
    for ( int i = 0; i<m; i++)
    {
        for (int  j = 0; j<n; j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }

    return 0;
}