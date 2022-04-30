#include<bits/stdc++.h>

using namespace std;
#define Max 100
int main() {
        double x[Max], fx[Max], sum = 0.0, xreq, prodfunc;
        int n;
        printf("How many records you will be enter : ");
        scanf("%d", & n);

        for (int i = 0; i < n; i++) {
                printf("\nEnter the value of x%d: ", i);
                scanf("%lf", & x[i]);
                printf("\nEnter the value of f(x%d): ", i);
                scanf("%lf", & fx[i]);
        }
        printf("\nEnter X for finding f(x) : ");
        scanf("%lf", & xreq);
        for (int i = 0; i < n; i++) {
                prodfunc = 1.0;
                for (int j = 0; j < n; j++) {
                        if (i != j) {
                                prodfunc = prodfunc * ((xreq - x[j]) / (x[i] - x[j]));
                        }
                }
                sum = sum + prodfunc * fx[i];
        }
        printf("\nInterpolated function value at x: %.2f is %.3f\n", xreq, sum);
        return 0;
}
