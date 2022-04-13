#include<bits/stdc++.h>

using namespace std;

#define MAX 100

void normal(double x[MAX], double y[MAX], double c[MAX][MAX], double b[MAX], int n, int m) {
    int l1, l2;

    for (int j = 1; j <= m; j++) {
        for (int k = 1; k <= m; k++) {
            c[j][k] = 0;
            l1 = k + j - 2;

            for (int i = 1; i <= n; i++) {
                c[j][k] += pow(x[i], l1);
            }
        }
    }

    for (int j = 1; j <= m; j++) {
        b[j] = 0;
        l2 = j - 1;

        for (int i = 1; i <= n; i++) {
            b[j] += y[i] * pow(x[i], l2);
        }
    }
}

void gauss(int n, double a[MAX][MAX], double b[MAX], double x[MAX]) {
    double pivot, factor, sum;

    for (int k = 1; k <= n - 1; k++) {
        pivot = a[k][k];

        for (int i = k + 1; i <= n; i++) {
            factor = a[i][k] / pivot;

            for (int j = k + 1; j <= n; j++) {
                a[i][j] -= factor * a[k][j];
            }

            b[i] -= factor * b[k];
        }
    }

    x[n] = b[n] / a[n][n];

    for (int k = n - 1; k >= 1; k--) {
        sum = 0;

        for (int j = k + 1; j <= n; j++) {
            sum += a[k][j] * x[j];
        }

        x[k] = (b[k] - sum) / a[k][k];
    }
}

int main() {
    int n, mp, m;
    double x[MAX], y[MAX], c[MAX][MAX], a[MAX], b[MAX];

    cout << "\tPOLYNOMIAL Function REGRESSION" << endl << endl;

    cout << "Input number of data points: ";
    cin >> n;

    cout << endl << "Input order of polynomial: ";
    cin >> mp;

    cout << endl << "Input x and y values:" << endl;

    for (int i = 1; i <= n; i++) {
        cin >> x[i] >> y[i];
    }

    if (n < mp) {
        cout << "Regression is not possible!" << endl;
    } else {
        m = mp + 1;

        normal(x, y, c, b, n, m);

        gauss(m, c, b, a);

        cout << endl << "Polynomial Regression Equation: ";

        cout << "y = ";
        for (int i = 1; i <= m; i++) {
            cout << "(" << a[i] << ")";

            if (i > 1) {
                cout << " x" << i - 1;
            }
            if (i < m) {
                cout << " + ";
            }
        }

        cout << endl;
    }

    return 0;
}

/*
4
2
1 2
2.1 2.5
3.2 3
4 4
*/

/*
4
2
1 6
2 11
3 18
4 27
*/
