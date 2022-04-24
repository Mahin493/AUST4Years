#include <bits/stdc++.h>
using namespace std;

double f(double x)
{
    return x*x*x-x*x+2;
}
double derivf(double x)
{
    return 3*x*x-2*x;
}
void bisection(double a, double b)
{
    int itr=0;
    double c = a;
    while(abs(b-a)>=0.0000001)
    {
        c = (a+b)/2;
        if (f(c) == 0.0)
            break;

        else if (f(c)*f(a) < 0)
            b = c;
        else
            a = c;
        itr++;
    }
    cout << "The value of root is : " << c<< endl;;

    cout << "No. of iterations = " << itr << endl;
}
void newtonraphson(double x)
{
    int itr=0;
    double h=f(x)/derivf(x);
    while(abs(h)>=0.000001)
    {
        h=f(x)/derivf(x);
        x=x-h;
        itr++;
    }
    cout<<"The value of the root is : "<<x<< endl;;
    cout << "No. of iterations = " << itr << endl;
}
void secant(double x1, double x2)
{
    int itr=0;
    double xm,x0,c;
    if(f(x1)*f(x2)>0)
    {
        do {
            x0=(x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
            c=f(x1) * f(x0);
            x1=x2;
            x2=x0;
            if(c==0)
                break;
            xm=(x1*f(x2)-x2*f(x1))/(f(x2)-f(x1));
            itr++;
        } while (fabs(xm - x0) >= 0.00001);

        cout << "Root of the given equation=" << x0 << endl;
        cout << "No. of iterations = " << itr << endl;
    }
}

void falseposition(double a, double b)
{
    int itr=0;
    double c = a;

    for (int i=0; i < 10000; i++)
    {
        c = (a*f(b) - b*f(a))/ (f(b) - f(a));

        if (fabs(f(c))<=0.000001)
            break;
        else if (f(c)*f(a) < 0)
            b = c;
        else
            a = c;
        itr++;
    }
    cout << "The value of root is : " << c<< endl;;
    cout << "No. of iterations = " << itr << endl;
}
int main()
{
    while(1)
    {
        printf("Enter your choice:\n");
        printf("1.Newton Raphson 2.Secant 3.Bisection 4.False Position 5.Exit\n");
        int choice;
        cin>>choice;
        if(choice==1)
        {
            printf("Enter starting range and ending range : ");
            float start,end;
            cin>>start>>end;
            newtonraphson(start);
        }
        else if(choice==2)
        {
            printf("Enter starting range and ending range : ");
            float start,end;
            cin>>start>>end;
            secant(start,end);
        }
        else if(choice==3)
        {
            printf("Enter starting range and ending range : ");
            float start,end;
            cin>>start>>end;
            bisection(start,end);
        }
        else if(choice==4)
        {
            printf("Enter starting range and ending range : ");
            float start,end;
            cin>>start>>end;
            falseposition(start,end);
        }
        else
            return 0;
    }
}
