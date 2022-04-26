#include<bits/stdc++.h>

using namespace std;
#define Max 100
int main() {
        double x[Max], fx[Max], sum = 0.0, xreq, prodfunc;
        int n, c = 0, cn = 0;
        cout << "How many records you will be enter : ";
        cin >> n;

        for (int i = 0; i < n; i++) {
                cout << "\nEnter the value of x" << i << " : ";
                cin >> x[i];
                cout << "\nEnter the value of f(x" << i << ") : ";
                cin >> fx[i];

        }
        cout << "\nEnter X for finding f(x) : ";
        cin >> xreq;

        for (int i = 0; i < n; i++) {
                prodfunc = 1.0;
                for (int j = 0; j < n; j++) {
                        if (i != j) {
                                prodfunc *= (xreq - x[j]) / (x[i] - x[j]);
                                printf("\n\n\t\t**Inner Loop\n\t\tAfter stage %d  : \n", ++c);
                                printf("\n\t\tj=%d\t x[%d]=%lf\t i=%d\t x[%d]=%lf\tProduct Function : %lf\n", j, j, x[j], i, i, x[i], prodfunc);

                        }
                }
                sum += prodfunc * fx[i];
                printf("\n\n\n****Outer Loop\nAfter stage %d  : \n", ++cn);
                printf("Sum= %lf\tProduct=%lf\tfx[%d]=%lf\n", sum, prodfunc, i, fx[i]);

        }

        printf("\n\nf(%.2lf)=%.3lf", xreq, sum);
        return 0;
}
/**
4
0
0
1
2
2
8
3
27
2.5
***/
