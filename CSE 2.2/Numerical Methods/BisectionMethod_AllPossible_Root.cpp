#include<bits/stdc++.h>

using namespace std;

double arr[100];
double error = 0.001;
int n;

double func(double x) {
        double res = arr[n];
        for (int i = n - 1; i >= 0; i--) {
                res = res * x + arr[i];
        }
        return res;
}

int main() {
        int i, j, k;
        printf("Enter  maximum power: ");
        scanf("%d", & n);
        printf("Enter the coefficients (from maximum power): ");
        for (i = n; i >= 0; i--) {
                scanf("%d", & arr[i]);
        }

        double a = -6, b = 6, dx = 0.1;

        while (true) {
                double x1, x2, f1, f2;
                x1 = a;
                x2 = x1 + dx;
                f1 = func(x1);
                f2 = func(x2);

                if (f1 * f2 < 0) {
                        while (true) {
                                f1 = func(x1);
                                f2 = func(x2);
                                double x0 = (x1 + x2) / 2;
                                double f0 = func(x0);

                                if (f1 * f0 < 0) {
                                        x2 = x0;
                                } else {
                                        x1 = x0;
                                }

                                double e = fabs((x2 - x1) / x2);
                                if (e <= error) {
                                        printf("\n");
                                        printf("Between %d and %d there is a root %d\n", x1, x2, x0);
                                        break;
                                }

                        }
                }

                if (x2 < b) {
                        a = x2;
                } else {
                        break;
                }
        }
}
