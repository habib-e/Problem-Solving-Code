#include<stdio.h >
#define PI 3.14159
double radius, area,cost;
double Area_Cost_finder(double area){
    cost=area* 23000;
    if(area>3400.89)
    {
        cost=cost-((cost*10)/100);
        printf("cost of circle with discount: %0.4lf\n", cost);
        return 0;
    }
    else
    {
        printf("cost of circle : %0.4lf\n", cost);
        return 0;
    }
}
int main()
{

    printf("Enter radius of circle : ");
    scanf("%lf", & radius);
    area = PI * radius * radius;
    Area_Cost_finder(area);
}
