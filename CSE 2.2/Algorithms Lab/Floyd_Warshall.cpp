#include<bits/stdc++.h>

#include<stdlib.h>

using namespace std;
#define N 5

void printPath(int path[][N], int v, int u) {
        if (path[v][u] == v)
                return;

        printPath(path, v, path[v][u]);
        printf("%d ", path[v][u]);
}

void printSolution(int cost[N][N], int path[N][N]) {
        printf("Solution Matrix: \n");
        for (int v = 0; v < N; v++) {
                for (int u = 0; u < N; u++) {
                        if (cost[v][u] == INT_MAX)
                                printf("inf\t");
                        else
                                printf("%d\t", cost[v][u]);
                }
                printf("\n");
        }

        printf("\n");
        for (int v = 0; v < N; v++) {
                for (int u = 0; u < N; u++) {
                        if (u != v && path[v][u] != -1) {
                                printf("Shortest Path from vertex %d to vertex %d is (%d ", v, u, v);
                                printPath(path, v, u);
                                printf("%d)\n", u);
                        }
                }
        }
}

void FloydWarshell(int adjMatrix[][N]) {
        int cost[N][N], path[N][N];
        for (int v = 0; v < N; v++) {
                for (int u = 0; u < N; u++) {
                        cost[v][u] = adjMatrix[v][u];
                        if (v == u)
                                path[v][u] = 0;
                        else if (cost[v][u] != INT_MAX)
                                path[v][u] = v;
                        else
                                path[v][u] = -1;
                }
        }
        for (int k = 0; k < N; k++) {
                for (int v = 0; v < N; v++) {
                        for (int u = 0; u < N; u++) {
                                if (cost[v][k] != INT_MAX && cost[k][u] != INT_MAX &&
                                        cost[v][k] + cost[k][u] < cost[v][u]) {
                                        cost[v][u] = cost[v][k] + cost[k][u];
                                        path[v][u] = path[k][u];
                                }
                        }
                        if (cost[v][v] < 0) {
                                printf("Negative Weight Cycle Found!!");
                                return;
                        }
                }
        }
        printSolution(cost, path);
}
int main() {
        int adjMatrix[N][N] = {
                {0,    3,    8,   INT_MAX,    -4},
		          {INT_MAX,   0,   INT_MAX,  1,  7},
		          {INT_MAX, 4, 0, INT_MAX, INT_MAX},
		          {2,   INT_MAX,  -5,  0,  INT_MAX},
		          {INT_MAX, INT_MAX, INT_MAX, 6, 0}
        };
        FloydWarshell(adjMatrix);

        return 0;
}
