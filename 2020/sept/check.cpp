#include<bits/stdc++.h>
using namespace std;
vector<int>v,vv;
int main()
{

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int i=0,j=n-1;
    while(i<j)
    {
        int x=v[j];
        int y=v[i];
        vv.push_back(x);
        vv.push_back(y);
        j--;
        i++;
    }
    if(n&1){int y=vv[j]; vv.push_back(y);
    }
    int cnt=0;
    for(i=1;i<n-1;i++)
    {
        if(vv[i]<vv[i-1] && vv[i]<vv[i+1])
            cnt++;
    }
    cout<<cnt<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<vv[i]<<" ";
    }
    return 0;
}

