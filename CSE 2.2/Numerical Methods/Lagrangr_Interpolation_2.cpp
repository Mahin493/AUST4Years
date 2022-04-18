#include<bits/stdc++.h>

using namespace std;

int main() {
        int i, j, k, n;
        double x[100], f[100], a[100], d[100][100], xp, sum, p, s[100][100];
        printf("How many records you will enter : ");
        //cout<<"How many records you will enter : ";
        scanf("%d", & n);
        //cin>>n;

        for (i = 1; i <= n; i++) {

                printf("\nEnter the value of x%d: ", i);
                //cout<<"\nEnter the value of x"<<i<<" : " ;
                scanf("%lf", & x[i]);
                //cin>>x[i];
                printf("\nEnter the value of f(x%d): ", i);
                //cout<<"\nEnter the value of f(x"<<i<<") : " ;
                scanf("%lf", & f[i]);
                //cin>>f[i];

        }

        for (i = 1; i <= n; i++)
                d[i][1] = f[i];

        /*     printf("----------------------------------------------------------------------------------");
        //cout<<"----------------------------------------------------------------------------------";
        printf("\nx \t\t f(x)\n");
        //cout<< "\nx \t\t f(x)"<<endl;
        printf("----------------------------------------------------------------------------------");
        //cout<<"----------------------------------------------------------------------------------";
*/
        for (j = 2; j <= n; j++) {

                for (i = 1; i <= n - j + 1; i++) {

                        d[i][j] = (d[i + 1][j - 1] - d[i][j - 1]) / (x[i + j - 1] - x[i]);
                        s[i][j] = d[i][j];
                }

        }
        for (j = 1; j <= n; j++) {
                a[j] = d[1][j];
        }

        /* for(i=1;i<=n;i++)
         {
             printf("\n%f\t%f\n",x[i],f[i]);
             //cout<<"\n"<< x[i] <<"\t" <<f[i]<<endl;
             for(int j=2;j<=n;j++)
             {
                  if(s[i][j]!=0)
                     printf("\t\t%f",s[i][j]);
                 //cout<<"\t\t"<<s[i][j];
             }
         } */

        printf("\nEnter X for finding f(x) : ");
        //cout<<"\nEnter X for finding f(x) : ";
        scanf("%lf", & xp);
        //cin>>xp;

        sum = a[1];
        for (i = 2; i <= n; i++) {
                p = 1.0;
                for (j = 1; j <= i - 1; j++) {
                        p = p * (xp - x[j]);
                }
                sum = sum + a[i] * p;

        }
        printf("\nUsing Lagrange Interpolation Formula, x =  %f\n", sum);
        //cout<<"\n* * * x =  "<<sum<<"* * *"<<endl;
        return 0;
}
/*
5
5 150
7 392
11 1452
13 2366
21 9702
6
*/
