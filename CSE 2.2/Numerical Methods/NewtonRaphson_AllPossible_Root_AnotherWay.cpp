#include<bits/stdc++.h>

using namespace std;

double eps = 0.0001;

double coef[20];
double coef_temp[20];

int d;

//Function evaluation using Horner's Method
double f_horner(double x) {
        double p = coef[d];

        for (int i = d - 1; i >= 0; i--) {
                p = coef[i] + p * x;
        }

        return p;
}

//Evaluation of derivative
double f_prime(double x) {
        double der = 0;

        for (int i = 0; i <= d; i++) {
                der += coef[i] * i * pow(x, i - 1);
        }

        return der;
}

//Deflation of the equation
void f_deflate(double x) {
        double p = 0;

        for (int i = d; i > 0; i--) {
                p = coef[i] + p * x;
                coef_temp[i - 1] = p;
        }

        d--;

        for (int i = 0; i <= d; i++) {
                coef[i] = coef_temp[i];
        }
}

int main() {
        freopen("Input2.txt", "r", stdin);

        cin >> d;

        for (int i = 0; i <= d; i++) {
                cin >> coef[i];
        }

        double x0;
        double x1;

        cin >> x0;

        int n = 0;

        while (true) {
                x1 = x0 - f_horner(x0) / f_prime(x0);

                double e = fabs((x1 - x0) / x1);

                if (e < eps) {
                        n++;
                        cout << fixed << showpoint << setprecision(9);
                        cout << "Root " << n << ": " << x1 << endl;

                        f_deflate(x1);

                        if (n >= 3) {
                                break;
                        }
                }

                x0 = x1;
        }

        return 0;
}
