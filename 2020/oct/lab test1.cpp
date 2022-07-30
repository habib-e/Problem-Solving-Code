#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,j,cnt=0;
    cout<<"Enter the number of children : ";
    cin>>n;
    vector<double>scar(n);
    cout<<"Their scarcity : ";
    for(i=0;i<n;i++)
    {
        cin>>scar[i];
    }
    sort(scar.rbegin(),scar.rend());
    cout<<"Enter the number of sweets : ";
    cin>>s;
    vector<double>swe(s);
    cout<<"sweet's amount : ";
    for(i=0;i<s;i++)
    {
        cin>>swe[i];
    }
    sort(swe.rbegin(),swe.rend());
    for(i=0;i<s;i++)
    {
        for(j=0;j<n;j++)
        {
            if(swe[i]>=scar[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
