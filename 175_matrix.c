// matrix example
//  2 diementioal array
#include <stdio.h>
void main()
{
    int mat[3][3] = {{12, 34, 56}, {11, 22, 33}, {23, 24, 55}};
    printf("matrix element are  : \n");
    printf("%d ", mat[0][0]);
    printf("%d ", mat[0][1]);
    printf("%d \n", mat[0][2]);
    printf("%d ", mat[1][0]);
    printf("%d ", mat[1][1]);
    printf("%d \n", mat[1][2]);
    printf("%d ", mat[2][0]);
    printf("%d ", mat[2][1]);
    printf("%d \n", mat[2][2]);

    printf("matrix element are  : \n");
    int i, j;
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("matrix element address are  : \n");
    for (i = 0; i < 3; i++) // 2
    {
        for (j = 0; j < 3; j++) // 3
        {
            printf("%d ", &mat[i][j]);
        }
        printf("\n");
    }
}