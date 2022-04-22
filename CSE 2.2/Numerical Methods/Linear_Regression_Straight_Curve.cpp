#include<bits/stdc++.h>
using namespace std;

#define MAX 10
#define EPS 0.000001

int main()
{
    int n;
    double x[MAX], y[MAX];
    double sumx, sumy, sumxx, sumxy, xmean, ymean, denom, a, b;

    cout << "\tLINEAR REGRESSION" << endl << endl;

    cout << "Input number of data points: ";
    cin >> n;

    cout << endl << "Input x and y values:" << endl;

    for(int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }

    sumx = 0;
    sumy = 0;
    sumxx = 0;
    sumxy = 0;

    for(int i = 1; i <= n; i++)
    {
        sumx += x[i];
        sumy += y[i];
        sumxx += x[i] * x[i];
        sumxy += x[i] * y[i];
    }

    xmean = sumx/n;
    ymean = sumy/n;
    denom = n*sumxx - sumx*sumx;

    if(fabs(denom) > EPS)
    {
        b = (n*sumxy - sumx*sumy)/denom;
        a = ymean - b*xmean;

        cout << endl << "Linear Regression Equation: ";
        cout << "y = " << "(" << a << ")" << " + " << "(" << b << ")" << " x" << endl;
    }

    return 0;
}

/*
5
1 3
2 5
3 7
4 9
5 11
*/

/*
5
1 3
2 4
3 5
4 6
5 8
*/
