#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<int>v(2*n),va;
        for(i=0;i<2*n;i++){
            cin>>v[i];
        }
        vector<bool>vv(2*n);
        for(i=0;i<2*n;i++){
            if(vv[v[i]-1]==false){
                vv[v[i]-1]=true;
                va.push_back(v[i]);
            }
        }
        for(i=0;i<n;i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
    }
}