#include <stdio.h>

void printN(int i, int j) {
    if (j == 0 || j == 6 || i == j)
        printf("*");
    else
        printf(" ");
}

void printA(int i, int j) {
    if ((j == 0 || j == 6) && i != 0 ||
        i == 0 && j > 0 && j < 6 ||
        i == 3)
        printf("*");
    else
        printf(" ");
}

void printD(int i, int j) {
    if (j == 0 || (j == 6 && i != 0 && i != 6) || 
        (i == 0 || i == 6) && j < 6)
        printf("*");
    else
        printf(" ");
}

void printI(int i, int j) {
    if (i == 0 || i == 6 || j == 3)
        printf("*");
    else
        printf(" ");
}

int main() {
    int i, j;
    for (i = 0; i < 7; i++) {
        // N
        for (j = 0; j < 7; j++)
            printN(i, j);
        printf("  ");

        // A
        for (j = 0; j < 7; j++)
            printA(i, j);
        printf("  ");

        // N
        for (j = 0; j < 7; j++)
            printN(i, j);
        printf("  ");

        // D
        for (j = 0; j < 7; j++)
            printD(i, j);
        printf("  ");

        // A
        for (j = 0; j < 7; j++)
            printA(i, j);
        printf("  ");

        // N
        for (j = 0; j < 7; j++)
            printN(i, j);
        printf("  ");

        // I
        for (j = 0; j < 7; j++)
            printI(i, j);
        printf("\n");
    }
    return 0;
}
