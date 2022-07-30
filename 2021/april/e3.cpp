#include<stdio.h>
int main()
{
    int array1[10][10],i,j,n,sum = 0;
    printf("Enter n for n by n matrix :");
    scanf("%d", &n);
    printf("\nEnter values to the matrix :: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nEnter a[%d][%d] value :: ",i,j);
            scanf("%d", &array1[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        sum = sum + array1[i][n-1-i];
    }
    printf("\nTHE SUM OF SECONDARY DIAGONAL OF MATRIX IS :: %d \n", sum);
    return 0;
}
