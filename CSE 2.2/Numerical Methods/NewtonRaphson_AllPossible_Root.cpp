#include<stdio.h>

#include<math.h>


//  evaluate polynomial using Horner's Methods
float horners(float coeff[], int n, float x) {
    float b = 0;
    int i;
    for (i = 0; i <= n; i++) {
        b = b * x + coeff[i];
    }
    return b;
}

//Finding derivative of function
float df(float poly[], int n, float x) {
    float value = 0;
    int i;
    for (i = 0; i < n; i++) {
        value = value * x + (n - i) * poly[i];
    }
    return value;

}

int main() {
    int n, i;
    float x, x1;
    float coeff[n + 1], q[n + 1];
    float f1, f2;
    float e;
    int c = 0;

    printf("\n Enter the highest degree of the equation: ");
    scanf("%d", & n);

    printf("\n Enter values of coefficients: ");
    for (i = 0; i <= n; i++) {
        printf("\n Coefficient x[%d] = ", n - i); // 2×3 – 6×2 + 2x – 1
        scanf("%f", & coeff[i]);
    }

    printf("\nEnter the initial approximation:");
    scanf("%f", & x);

    while (n > 1) {
        int i, k = 1;
        do {
            c = 0;
            for (i = 0; i <= n; i++) {
                if (coeff[i] != 0)
                    c++;
            }
            if (c == 1) break;
            c = 0;
            do {
                f1 = horners(coeff, n, x); ////2x3 - 6x2 + 2x - 1
                f2 = df(coeff, n, x);
                if (f2 == 0) {
                    //break;
                }
                x1 = x - (f1 / f2); //calculating root using newton raphson method
                e = fabs(x1 - x);
                x = x1;
                c++;
                if (c > 100)
                    break;
            } while (e > 0.0001);

            printf("\n Root %d: %f ", k, x);
            //code for polynomial deflation p(x) = q(x) (x-r) + R
            q[0] = coeff[0];
            for (i = 1; i <= n; i++) {
                q[i] = (q[i - 1] * x) + coeff[i];
            }
            n = n - 1;
            for (i = 0; i <= n; i++) {
                coeff[i] = q[i];

            }
            k++;

        } while (n > 0);

    }

    //printf("Root: %d", x1);
}
