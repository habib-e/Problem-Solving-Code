#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, A, s;
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / double(2);
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.2lf", A);
    return 0;
}