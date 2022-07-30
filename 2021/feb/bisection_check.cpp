#include <bits/stdc++.h>
using namespace std;
#define EPSILON 0.001
double func(double x)
{
    return x * x * x - x - 4;
}
int h = 1;
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;
    while ((b - a) >= EPSILON)
    {
        // cout << "b-a " << h << " = " << b - a << endl;
        // cout << "func a ,b and c " << h << " = " << func(a) << " " << func(b) << " " << func(c) << endl;
        // cout << "a and b " << h << " = " << a << " " << b << endl;

        c = (a + b) / 2;
        cout << "The value of root num : " << h << " is : " << c << endl;
        if (func(c) == 0.0)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;

        h++;
    }
}
int main()
{
    double a = 1, b = 2;
    bisection(a, b);
    return 0;
}
