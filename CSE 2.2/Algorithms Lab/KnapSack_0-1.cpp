#include <bits/stdc++.h>

using namespace std;
int knapsack(int W, int weight[], int value[], int n) {
        int i, j, K[n + 1][W + 1];
        for (i = 0; i <= n; i++) {
                for (j = 0; j <= W; j++) {
                        if (i == 0 || j == 0) {
                                K[i][j] = 0;
                                cout << K[i][j] << " ";
                        } else if (weight[i - 1] <= j) {
                                K[i][j] = max(value[i - 1] + K[i - 1][j - weight[i - 1]], K[i - 1][j]);
                                cout << K[i][j] << " ";
                        } else {
                                K[i][j] = K[i - 1][j];
                                cout << K[i][j] << " ";
                        }
                }
                printf(" \n");
        }
        i--;
        j--;
        cout << "\nItem no: " << endl;
        int pk = 0;
        while (i > 0) {
                if (K[i][j] != K[i - 1][j]) {
                        cout << i << endl;
                        j -= weight[i - 1];
                        pk++;
                }
                i--;
        }
        cout << "\nNumber Of picked items : " << pk << endl;
        return K[n][W];
}
int main() {
        int numberofitem, value[50], weight[50], w;
        scanf("%d", & numberofitem);
        for (int i = 0; i < numberofitem; i++) {
                scanf("%d", & value[i]);
        }
        for (int j = 0; j < numberofitem; j++) {
                scanf("%d", & weight[j]);
        }
        scanf("%d", & w);
        int maxprofit = knapsack(w, weight, value, numberofitem);
        cout << "\nMaximum profit = " << maxprofit << endl;
}
