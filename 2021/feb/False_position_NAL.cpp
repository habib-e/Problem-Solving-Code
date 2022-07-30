#include <stdio.h>
#include <math.h>
#define e 0.01
#define f(x) x *x *x - x - 8
void false_position()
{
    int i = 0;
    float x0, x1, x2, f0, f1, f2;
    printf("Enter false position values of x0 and x1  : ");
    scanf("%f%f", &x0, &x1);
    do
    {
        f0 = f(x0);
        f1 = f(x1);
        f2 = f(x2);
        x2 = ((x0 * f1) - (x1 * f0)) / (f1 - f0);
        if (f0 * f2 < 0)
        {
            x1 = x2;
            f1 = f2;
        }
        else
        {
            x0 = x2;
            f0 = f2;
        }
        i++;
        printf("No of iteration = %d\t", i);
        printf("root = %f\t", x2);
        printf("value of function = %f\n", f2);
    } while (fabs(f2) > e);
}
void bisection()
{
    float x0, x1, x2, f0, f1, f2;
    int i = 0;
    printf("Enter the bisection values of x0 and x1 : ");
    scanf("%f%f", &x0, &x1);
    do
    {
        f0 = f(x0);
        f1 = f(x1);
        x2 = (x0 + x1) / 2;
        f2 = f(x2);
        if (f0 * f2 < 0)
        {
            x1 = x2;
        }
        else
        {
            x0 = x2;
        }
        i++;
        printf("No of iteratioin = %d\t", i);
        printf("root = %f\t", x2);
        printf("value of function = %f\n", f2);
    } while (fabs(f2) > e);
}
int main()
{
    false_position();
}
