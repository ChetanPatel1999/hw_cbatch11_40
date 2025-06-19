// matrix with function
//  wap to take two matrix from user and display their sum.
#include <stdio.h>
void matrix_input(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enetr element pos[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}
void disp_matrix(int r, int c, int mat[r][c])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void main()
{
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j;
    printf("enter matrix1 element : \n");
    matrix_input(3, 3, mat1);
    printf("enter matrix2 element : \n");
    matrix_input(3, 3, mat2);
    printf("matrix1 element are : \n");
    disp_matrix(3, 3, mat1);

    printf("matrix2 element are : \n");
    disp_matrix(3, 3, mat2);

    // sum of two matrix
    for (i = 0; i < 3; i++) // 3
    {
        for (j = 0; j < 3; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("matrix3 element are : \n");
    disp_matrix(3, 3, mat3);
}