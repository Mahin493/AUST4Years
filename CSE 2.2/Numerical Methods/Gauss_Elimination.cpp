#include<bits/stdc++.h>

using namespace std;

int i, j, k, n;
float A[20][20], D[10] = {
    0
}, c;

void gaussElimination() {
    int mul = 0;
    for (i = n - 1; i > 0; i--) // partial pivoting
    {
        if (A[i - 1][0] < A[i][0])
            for (j = 0; j <= n; j++) {
                c = A[i][j];
                A[i][j] = A[i - 1][j];
                A[i - 1][j] = c;
                mul++;
            }
    }
    //********* changing to upper triangular matrix*************//
    //********* Forward elimination process**************//
    for (k = 0; k < n - 1; k++)
        for (i = k; i < n - 1; i++) {
            c = (A[i + 1][k] / A[k][k]);

            for (j = 0; j <= n; j++) {
                A[i + 1][j] = A[i + 1][j] - c * A[k][j];
            }
        }

    //***************** Backward Substitution method****************//

    for (i = n - 1; i >= 0; i--) {
        c = 0;
        for (j = i; j <= n - 1; j++) {
            c = c + A[i][j] * D[j];
            mul++;
        }

        D[i] = (A[i][n] - c) / A[i][i];
    }
    //******** RESULT DISPLAY *********//
    for (i = 0; i < n; i++)
        printf("%.3lf\n", D[i]);
    printf("No. of Multiplications: %d\n", mul);
}

void gaussJordan() {
    int mul = 0;
    /* Now finding the elements of diagonal matrix */
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j) {
                c = A[j][i] / A[i][i];
                for (k = 0; k < n + 1; k++) {
                    A[j][k] = A[j][k] - (c * A[i][k]);
                    mul++;
                }
            }
        }
    }
    printf("\nThe solution is:\n");
    for (i = 0; i < n; i++) {
        D[i] = A[i][n] / A[i][i];
        printf("\n%.3f\n", D[i]);
    }
    printf("No. of Multiplications: %d\n", mul);
}

int main() {
    printf("\nEnter the size of matrix: ");
    scanf("%d", & n);
    printf("\nEnter the elements of augmented matrix row-wise:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n + 1; j++) {
            printf(" A[%d][%d]:", i + 1, j + 1);
            scanf("%f", & A[i][j]);
        }
    }
    clock_t tick, tock;
    tick = clock();
    gaussElimination();
    tock = clock();
    printf("Time for gauss elimination : %lf", (double)(tock - tick) / CLOCKS_PER_SEC);
    tick = clock();
    gaussJordan();
    tock = clock();
    printf("Time for gauss jordan : %lf", (double)(tock - tick) / CLOCKS_PER_SEC);
    return 0;
}
