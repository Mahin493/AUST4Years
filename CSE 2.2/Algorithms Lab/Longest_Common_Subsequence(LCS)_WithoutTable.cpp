#include <bits/stdc++.h>

using namespace std;
int b[1000][1000], c[1000][1000];
string X, Y;
#define diagonal_arrow 0
#define top_arrow 1
#define left_arrow 2
//int length1,length2;
void LCS_LENGTH(string X, string Y);
void PRINT_LCS(string S, int i, int j);
void LCS_LENGTH(string X, string Y) {
        int m = X.length();
        int n = Y.length();
        for (int i = 1; i <= m; i++) {
                c[i][0] = 0;
        }
        for (int j = 1; j <= n; j++) {
                c[0][j] = 0;
        }
        for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= n; j++) {
                        if (X[i] == Y[j]) {
                                c[i][j] = c[i - 1][j - 1] + 1;
                                b[i][j] = diagonal_arrow;
                        } else if (c[i - 1][j] >= c[i][j - 1]) {
                                c[i][j] = c[i - 1][j];
                                b[i][j] = top_arrow;
                        } else {
                                c[i][j] = c[i][j - 1];
                                b[i][j] = left_arrow;
                        }
                }
        }
}
void PRINT_LCS(string X, int i, int j) {
        if (i == 0 || j == 0) {
                return;
        }
        if (b[i][j] == diagonal_arrow) {
                PRINT_LCS(X, i - 1, j - 1);
                printf("%c", X[i]);
                //cout<<X[i];
        } else if (b[i][j] == top_arrow) {
                PRINT_LCS(X, i - 1, j);
        } else {
                PRINT_LCS(X, i, j - 1);
        }
}
int main() {
        cout << "Enter 1st String: ";
        cin >> X;
        cout << "Enter 2nd String: ";
        cin >> Y;
        X = "0" + X;
        Y = "0" + Y;
        //length1=X.length();
        //length2=Y.length();
        LCS_LENGTH(X, Y);

        printf("\nlongest common length :");
        //cout <<"\nlongest common length :";
        //cout<< (c[length1-1][length2-1])-1<<endl;
        printf("%d\n", (c[X.length() - 1][Y.length() - 1]));
        //cout<< (c[X.length()-1][Y.length()-1])-1<<endl;
        printf("\nlongest common subsequence : ");
        //cout <<"\nlongest common subsequence :";
        PRINT_LCS(X, X.length(), Y.length());
        //cout<<endl;
        printf("\n");
        return 0;
}
