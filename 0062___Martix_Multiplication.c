#include<stdio.h>

int main() {
    int a[10][20], b[10][20], result[10][20];
    int i, j, r1, c1, r2, c2, k, sum;

    printf("Enter the first Matrix Row & Column: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the second Matrix Row & Column: ");
    scanf("%d %d", &r2, &c2);

    while (c1 != r2) {
        printf("Invalid dimensions! Please enter again.\n");
        printf("Enter the first Matrix Row & Column: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter the second Matrix Row & Column: ");
        scanf("%d %d", &r2, &c2);
    }

    printf("Enter elements for Matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            sum = 0;
            for (k = 0; k < c1; k++) {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }

    printf("Multiplication Result = \n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

