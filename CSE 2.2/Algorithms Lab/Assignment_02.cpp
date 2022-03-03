#include<bits/stdc++.h>

using namespace std;

static int m, n, c = 0, flag = 0;

int g[50][50];

int x[50];

void nextValue(int k);

void GraphColoring(int k);

int main()

{

        int i, j;

        int temp;

        printf("Enter the number of nodes: ");

        scanf("%d", & n);

        printf("\nEnter Adjacency Matrix:\n");

        for (i = 1; i <= n; i++)

        {

                for (j = 1; j <= n; j++)

                {

                        scanf("%d", & g[i][j]);

                }

        }

        printf("\nPossible Solutions are\n");

        for (m = 1; m <= n; m++)

        {

                if (c == 1)

                {

                        break;

                }

                GraphColoring(1);

        }

        printf("\nLeast needed number of color is %d", m - 1);

        printf("\nTotal number of possible solution is %d", flag);

}

void GraphColoring(int k)

{

        int i;

        while (1)

        {

                nextValue(k);

                if (x[k] == 0)

                {

                        return;

                }

                if (k == n)

                {

                        c = 1;

                        for (i = 1; i <= n; i++)

                        {

                                printf("%d ", x[i]);

                        }

                        flag++;

                        printf("\n");

                } else

                        GraphColoring(k + 1);

        }

}

void nextValue(int k)

{

        int j;

        while (1)

        {

                x[k] = (x[k] + 1) % (m + 1);

                if (x[k] == 0)

                {

                        return;

                }

                for (j = 1; j <= n; j++)

                {

                        if (g[k][j] != 0 && x[k] == x[j])

                                break;

                }

                if (j == (n + 1))

                {

                        return;

                }

        }

}
