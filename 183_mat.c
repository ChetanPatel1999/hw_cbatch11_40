// how to print left digonal of matrix.
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

    // code for  left digonal
    if (r == c)
    {
        printf("left digonal element are : \n");
        for (i = 0; i < r; i++)
        {
            printf("%d ", mat[i][i]);
        }
    }
    else
    {
        printf("your matrix is not square matrix");
    }
}