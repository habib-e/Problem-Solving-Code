#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,x,sum=0,take=0;
        cin>>n;
        vector<int>v;
        for(i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        while(1)
        {
            i=0;
            if(v[i]==0)
                break;
            take=v[i]-v[i+1];
            sum+=min(v[i],v[i+1]);
            if(take>0)
            {
                v.push_back(take);
                v[i]=0;
                v[i+1]=0;
            }
            sort(v.rbegin(),v.rend());
        }
        cout<<sum<<endl;
        v.clear();

    }
}
