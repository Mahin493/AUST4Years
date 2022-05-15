#include<bits/stdc++.h>
using namespace std;

#define SIZE 50

int n, m, s = 0;
int w[SIZE], x[SIZE];

void sumOfSubset(int sum, int k, int rem)
{
    x[k] = 1;

    if(sum + w[k] == m)
    {
        s++;
        for(int i = 1; i <= n; i++)
        {
            if(i > k)
            {
                x[i] = 0;
            }
            cout << x[i] << "\t";
        }
        cout << endl;

        return;
    }
    else if(sum + w[k] +  w[k + 1] <= m)
    {
        sumOfSubset(sum + w[k], k + 1, rem - w[k]);
    }

    if((sum + rem - w[k] >= m) && (sum + w[k+1] <= m))
    {
        x[k] = 0;

        sumOfSubset(sum, k + 1, rem - w[k]);
    }
}

int main()
{
    int sum = 0, k = 1, rem = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << endl << "Enter the set elements: ";
    for(int i = 1; i <= n; i++)
    {
        cin >> w[i];
        rem += w[i];
    }

    cout << endl << "Enter the sum of the subsets: ";
    cin >> m;

    cout << endl << "Possible subsets:" << endl << endl;

    for(int i = 1; i <= n; i++)
    {
        cout << w[i] << "\t";
    }

    cout << endl << endl;

    sumOfSubset(sum, k, rem);

    cout << endl << "Total number of possible subsets: " << s << endl;

    return 0;
}
