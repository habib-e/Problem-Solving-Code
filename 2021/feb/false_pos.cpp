#include <bits/stdc++.h>
using namespace std;
#define MAX_ITER 1000000
#define EPSILON 0.00001
double func(double x)
{
    return x * x * x - x - 8;
}
map<double, double> mp;
void regulaFalsi(double a, double b)
{
    if (func(a) * func(b) > 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }

    double c = a;

    for (int i = 0; i < MAX_ITER; i++)
    {
        c = (a * func(b) - b * func(a)) / (func(b) - func(a));
        // cout << "b-a " << i + 1 << " = " << b - a << endl;
        // cout << "func a ,b and c " << i + 1 << " = " << func(a) << " " << func(b) << " " << func(c) << endl;
        // cout << "a and b " << i + 1 << " = " << a << " " << b << endl;
        cout << "The value of root num : " << i + 1 << " is : " << c << " " << endl;

        if (func(c) == 0 || (b - a) < EPSILON)
            break;
        else if (func(c) * func(a) < 0)
            b = c;
        else
            a = c;

        mp[c]++;
        if (mp[c] > 1.0)
        {
            return;
        }
    }
}
int main()
{
    double a = 1.0, b = 2.0;
    regulaFalsi(a, b);
    return 0;
}
