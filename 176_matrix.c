// matrix example
//  2 diementioal array
#include <stdio.h>
void main()
{
    int mat[2][3] = {{12, 34, 56}, {11, 22, 33}};
    printf("matrix element are  : \n");
    int i, j;
    for (i = 0; i < 2; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("-------------------------------\n");
    int mat1[2][2] = {{12, 34}, {11, 22}};
    printf("matrix element are  : \n");
    for (i = 0; i < 2; i++) // 2
    {
        for (j = 0; j < 2; j++) // 3
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
}