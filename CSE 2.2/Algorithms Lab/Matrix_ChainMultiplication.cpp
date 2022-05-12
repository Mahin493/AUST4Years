#include <bits/stdc++.h>

using namespace std;
#define SIZE 100
int m[SIZE][SIZE], s[SIZE][SIZE];

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

void PRINT_OPTIMAL_PARENS(int s[SIZE][SIZE], int i, int j, char & name) {
        if (i == j) {
                printf("%c", name);
                name++;
        } else {
                cout << "(";
                PRINT_OPTIMAL_PARENS(s, i, s[i][j], name);
                PRINT_OPTIMAL_PARENS(s, s[i][j] + 1, j, name);
                cout << ")";
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
        char name = 'A';
        cout << "\nOptimal Parenthesization is : ";
        PRINT_OPTIMAL_PARENS(s, 1, length - 1, name);
        cout << "\nOptimal Cost is : " << m[1][length - 1];
        return 0;
}
