
#include <bits/stdc++.h>
using namespace std;
int ar[105];
int main()
{
    int t,n,i,x;
    cin >> t;

    while (t--)
    {
        map<int,int>mp;
        int mx=0;
        //memset(ar,0,sizeof(ar));
        cin>>n;
        vector<int>v(n);
        for(i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for(auto it : mp){
            mx=max(mx,it.second);
        }
        cout<<mx<<endl;
    }

    return 0;
}
