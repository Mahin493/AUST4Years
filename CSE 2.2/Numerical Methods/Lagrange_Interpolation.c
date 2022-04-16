#include "stdio.h"

#include "math.h"

#define SIZE 40
int main() {
        int i, j, n;
        float x[SIZE], f[SIZE], value, sum = 0, prodfunc[SIZE];

        printf("How many data are available? \n");
        scanf("%d", & n);

        for (i = 0; i < n; i++) {
                printf("\nEnter x[%d] ", i);
                scanf("%f", & x[i]);
                printf("Enter f(x%d) ", i);
                scanf("%f", & f[i]);
        }

        printf("\nEnter the value of x whose value is to be calculated? ");
        scanf("%f", & value);

        for (i = 0; i < n; i++) {
                prodfunc[i] = 1.0;
                for (j = 0; j < n; j++) {
                        if (i != j) {
                                prodfunc[i] = prodfunc[i] * (value - x[j]) / (x[i] - x[j]);
                        }

                }
        }
        //printf("Coeff are: \n");
        for (i = 0; i < n; i++) {
                //printf("\nprodfunc[%d] = %f",i, prodfunc[i]);
                sum = sum + prodfunc[i] * f[i];
        }
        printf("\nUsing Lagrange Method, The Solution is: %.3f\n", sum);

}
