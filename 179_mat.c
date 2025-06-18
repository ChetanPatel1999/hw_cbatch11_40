// wap to a display sum and average of all matrix element.
#include <stdio.h>
void main()
{
    int r, c;
    printf("enter row for matrix : ");
    scanf("%d", &r);
    printf("enter colum for matrix : ");
    scanf("%d", &c);
    int mat[r][c]; // matrix declaration
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enetr element pos[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // sum of all matrix element
    int sum = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + mat[i][j];
        }
    }
    printf("matrix element sum is : %d\n", sum);
    float average;
    average = sum /(float)(r * c);
    printf("matrix element avrage is : %.2f", average);
}