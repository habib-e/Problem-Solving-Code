#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cout<<"Enter the number of buyer : ";
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int have=0,f=0,sum=0;
    for(i=0;i<n;i++)
    {
        if(v[i]-5<=sum && ((v[i]-5==5) || (v[i]-5==10) || (v[i]-5==20) || (v[i]-5==0)))
        {
            cnt++;
            sum+=(v[i]-(v[i]-5));
        }
    }
    cout<<cnt<<endl;
    return 0;
}
