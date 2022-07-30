#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 100003
int main()
{
    int ar[MAX];
    int lis[MAX];
    lis[0]=1;
    cout<<"Enter the number of length of the array : ";
    int n;
    cin>>n;
    cout<<"Enter the element of lis : ";
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=1;i<n;i++)
    {
        int mx=0;
        for(int j=i-1;j>=0;j--)
        {
            if(ar[j]<ar[i])
            {
                mx=max(mx,lis[j]);
            }
        }
        lis[i]=mx+1;
    }
    int nx=0;
    for(int i=0;i<n;i++)
    {
//        cout<<lis[i]<<" ";
        nx=max(nx,lis[i]);
    }
    cout<<"maximum lis is : "<<nx;

    return 0;
}
