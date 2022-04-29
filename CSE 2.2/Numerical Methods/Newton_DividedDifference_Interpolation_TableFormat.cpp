#include<bits/stdc++.h>

using namespace std;

#define SIZE 100

int main() {
        //freopen("NDDI.txt", "r", stdin);

        int n;
        double x[SIZE], f[SIZE], xp;
        double d[SIZE][SIZE], temp[SIZE][SIZE], a[SIZE], sum, pi, fp;

        for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                        temp[i][j] = -1;
                }
        }

        // Taking input

        cin >> n;

        for (int i = 1; i <= n; i++) {
                cin >> x[i];
                cin >> f[i];
        }

        cin >> xp;

        // Construct the difference table

        for (int i = 1, j = 1; i <= n; i++, j += 2) {
                d[i][1] = f[i];
                temp[j][0] = x[i];
                temp[j][1] = f[i];
        }

        for (int j = 2, k = 2, l = 2; j <= n; j++) {
                for (int i = 1; i <= n - j + 1; i++) {
                        d[i][j] = (d[i + 1][j - 1] - d[i][j - 1]) / (x[i + j - 1] - x[i]);

                        temp[k][l] = d[i][j];
                        k += 2;
                }
                l++;
                k = l;
        }

        // Set the coefficients of interpolation polynomial

        for (int j = 1; j <= n; j++) {
                a[j] = d[1][j];
        }

        // Compute interpolation value

        sum = a[1];

        for (int i = 2; i <= n; i++) {
                pi = 1;

                for (int j = 1; j <= i - 1; j++) {
                        pi = pi * (xp - x[j]);
                }

                sum += a[i] * pi;
        }

        fp = sum;

        // Displaying difference table

        cout << endl << "x\tf(x)" << endl << endl;

        for (int i = 1; i <= n * 2; i++) {
                for (int j = 0; j <= n; j++) {
                        if (temp[i][j] == -1) {
                                cout << "\t";
                        } else {
                                cout << temp[i][j] << "\t";
                        }
                }

                cout << endl;
        }

        // Displaying interpolation value

        cout << "f(x) = " << fp << endl;

        return 0;
}

/*
5
5 150
7 392
11 1452
13 2366
21 9702
6
*/
