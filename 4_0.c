// 4. Write a program in C to find the sum of right diagonals of a matrix.

#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},
                 {4,5,6},
                 {7,8,9}
                };
    int sum=0;
    for (int i = 0; i < 3; i++)
            sum=sum+a[i][2-i];

    printf("sum of right diagonals = %d",sum);

    return 0;
}