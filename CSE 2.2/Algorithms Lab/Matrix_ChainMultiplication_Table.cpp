#include <bits/stdc++.h>

using namespace std;
int m[1000][1000], s[1000][1000];

void PRINT_OPTIMAL_PARENS(int i, int j, char & c) {
        if (i == j) {
                cout << c++;
                return;
        } else {
                cout << "(";
                PRINT_OPTIMAL_PARENS(i, s[i][j], c);
                PRINT_OPTIMAL_PARENS(s[i][j] + 1, j, c);
                cout << ")";
        }
}
void MATRIX_CHAIN_ORDER(int p[], int length) {
        int n = length - 1;
        for (int i = 1; i <= n; i++) {
                m[i][i] = 0;
        }
        for (int l = 2; l <= n; l++) {
                for (int i = 1; i <= (n - l + 1); i++) {
                        int j = i + l - 1;
                        m[i][j] = INT_MAX;
                        for (int k = i; k <= j - 1; k++) {
                                int q = m[i][k] + m[k + 1][j] + (p[i - 1] * p[k] * p[j]);
                                if (q < m[i][j]) {
                                        m[i][j] = q;
                                        s[i][j] = k;
                                }
                        }
                }
        }
}
int main() {
        int p[] = {
                30,
                35,
                15,
                5,
                10,
                20,
                25
        };
        int length = (sizeof(p) / sizeof( * p));
        MATRIX_CHAIN_ORDER(p, length);
        cout << "\nMinimum cost table:\n";
        for (int i = 1; i <= length - 1; i++) {
                for (int j = 1; j <= length - 1; j++) {
                        cout << m[i][j] << "\t";
                }
                cout << endl;
        }
        cout << endl;
        cout << "Table of values for minimum cost :\n";
        for (int i = 1; i <= length - 1; i++) {
                for (int j = 1; j <= length - 1; j++) {
                        cout << s[i][j] << "\t";
                }
                cout << endl;
        }
        char c = 'A';
        cout << "\nOptimal Parenthesization is : ";
        PRINT_OPTIMAL_PARENS(1, length - 1, c);
        cout << "\nOptimal Cost is : " << m[1][length - 1];
        return 0;
}
