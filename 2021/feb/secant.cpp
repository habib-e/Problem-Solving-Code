#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
float f(float x)
{
    return((x*x*x*x)-x-2); // f(x)= x^3-4
}
int main()
{
    float a,b,c,d,e;
    int count=1,n;
    printf("\n\nEnter the values of a and b:\n"); //(a,b) must contain the solution.
    scanf("%f%f",&a,&b);
    printf("Enter the values of allowed error and maximun number of iterations:\n");
    scanf("%f %d",&e,&n);
    do
    {
        if(f(a)==f(b))
        {
            printf("\nSolution cannot be found as the values of a and b are same.\n");
            break;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        printf("c : %lf\n",c);
        a=b;
        b=c;
        printf("Iteration No-%d    x=%f\n",count,c);
        count++;
        if(count==n)
        {
            break;
        }
    }
    while(fabs(f(c))>e);
    printf("\n The required solution is %f\n",c);

}
