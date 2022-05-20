#include<iostream>

#include<bits/stdc++.h>

using namespace std;

#define INT_MAX 999999
int minn = 99999;
int n = 4;
int dist[10][10] = {
        {5,20,42,25},
        {20,7,30,34},
        {42,30,6,10},
        {25,34,10,2}
};

int main() {

        int cost = 0, i, j, k;

        for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                        if (dist[i][j] < minn) {
                                minn = dist[i][j];

                        }
                }

                cost = cost + minn;

                for (k = 0; k < 4; k++) {
                        dist[i][k] = dist[i][k] - minn;
                }
                minn = 999999;
        }

        ////////////////////////////

        for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                        if (dist[j][i] < minn) {
                                minn = dist[j][i];

                        }
                }

                cost = cost + minn;

                for (k = 0; k < 4; k++) {
                        dist[k][i] = dist[k][i] - minn;
                }
                minn = 999999;
        }

        ///////////////////////
        printf("reduce matrix:\n");
        for (i = 0; i < 4; i++) {
                for (j = 0; j < 4; j++) {
                        printf("%d ", dist[i][j]);
                }
                printf("\n");

        }
        printf("minimum cost:%d\n", cost);
}
