// how to take matrix element from user
#include <stdio.h>
void main()
{
    int mat[2][2]; // matrix declaration
    int i, j;
    printf("enter matrix element : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("matrix element are : \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%5d ", mat[i][j]);
        }
        printf("\n");
    }
}