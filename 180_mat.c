// wap to take two matrix from user and display their sum.
#include <stdio.h>
void main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j;
    printf("enter matrix1 element : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enetr element pos[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("enter matrix2 element : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("enetr element pos[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("matrix1 element are : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("matrix2 element are : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // sum of two matrix
    for (i = 0; i < 3; i++)// 3
    {
        for (j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("matrix3 element are : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat3[i][j]);
        }
        printf("\n");
    }
}