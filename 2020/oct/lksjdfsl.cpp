#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,j,a[100],b[100],n,m;
    cout<<"Number of children:";
    cin>>n;
    cout<<"Their scarcity:";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    cout<<"Number of sweets:";
    cin>>m;

    cout<<"Sweets amount:";
    for(j=0; j<m; j++)
    {
        cin>>b[j];
    }

    int count=0;

    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            if(b[j]>=a[i]){count++;
            break;
            }


        }

    }
    cout<<count;
}
