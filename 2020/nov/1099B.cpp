#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        vector<pair<int,int>>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i].first;
            v[i].second=i+1;
        }
        //sort(v.begin(),v.end());
        if(n<=2 || n>m)
            cout<<-1<<endl;
        else
        {
            m-=n;
            ll c=0;
            vector<pair<int,int>> f;
            for(i=0;i<n;i++){
                if(i==n-1){
                    f.push_back({v[i].second,v[0].second});
                    c+=v[i].first+v[0].first;
                }
                else{
                    f.push_back({v[i].second,v[i+1].second});
                    c+=v[i].first+v[i+1].first;
                }
            }
            cout<<c<<endl;
            for(auto it : f){
                cout<<it.first<< " "<<it.second<<endl;
            }
        }
    }
    return 0;
}
