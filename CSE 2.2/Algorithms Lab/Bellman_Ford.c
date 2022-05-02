#include <stdio.h>

#include <stdlib.h>

#define SIZE 10
void Bellman_Ford(int G[SIZE][SIZE], int V, int E, int edge[SIZE][SIZE]) {
        int i, u, v, k, distance[SIZE], parent[SIZE], S, flag = 1;
        for (i = 0; i < V; i++)
                distance[i] = 1000, parent[i] = -1;
        scanf("%d", & S);
        distance[S - 1] = 0;
        for (i = 0; i < V - 1; i++) {
                for (k = 0; k < E; k++) {
                        u = edge[k][0], v = edge[k][1];
                        if (distance[u] + G[u][v] < distance[v])
                                distance[v] = distance[u] + G[u][v], parent[v] = u;
                }
        }
        for (k = 0; k < E; k++) {
                u = edge[k][0], v = edge[k][1];
                if (distance[u] + G[u][v] < distance[v])
                        flag = 0;
        }
        if (flag)
                for (i = 0; i < V; i++)
                        printf("Vertex %d -> cost = %d parent = %d\n", i + 1, distance[i], parent[i] + 1);
}
int main() {
        int V, edge[SIZE][SIZE], G[SIZE][SIZE], i, j, k = 0;
        freopen("Input4.txt", "r", stdin);
        scanf("%d", & V);
        for (i = 0; i < V; i++)
                for (j = 0; j < V; j++) {
                        scanf("%d", & G[i][j]);
                        if (G[i][j] != 0)
                                edge[k][0] = i, edge[k++][1] = j;
                }
        Bellman_Ford(G, V, k, edge);
        return 0;
}
