#include<bits/stdc++.h>
using namespace std;
float profit[1000],weight[1000],fraction[1000];
void fractional_knapsack(int m,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int mx=i;
        for(j=i+1;j<=n;j++)
        {
            if(profit[j]/weight[j]>profit[mx]/weight[mx]) mx=j;
        }
        swap(profit[mx],profit[i]);
        swap(weight[mx],weight[i]);
    }
    int capacity=m;
    for(i=1;i<=n;i++)
    {
        if(weight[i]>capacity) break;
        fraction[i]=1;
        capacity-=weight[i];
    }
    if(i<=n)
        fraction[i]=capacity/weight[i];
}
void final_calc(int n)
{
    float sum=0;
    for(int i=1;i<=n;i++) sum+=fraction[i]*profit[i];
    cout<<"Total Profit is : "<<sum<<endl;
}
int main()
{
    int n,i;
    cout<<"Enter the number of item : ";
    cin>>n;
    int cap;
    cout<<endl<<"Enter Total Capacity : ";
    cin>>cap;
    cout<<endl<<"Enter Profit and weight : ";
    for(i=1;i<=n;i++) cin>>profit[i]>>weight[i];
    fractional_knapsack(60,n);
    final_calc(n);
    return 0;
}
