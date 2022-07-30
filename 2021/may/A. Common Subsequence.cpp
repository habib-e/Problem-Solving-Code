#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m,i,x;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int>a(1001,0),b(1001,0);
        for(i=0;i<n;i++){
            cin>>x;
            a[x]++;
        }
        for(i=0;i<m;i++){
            cin>>x;
            b[x]++;
        }
        bool ans = true;
        for(i=1;i<1001;i++){
            if(a[i]*b[i]){
                cout<<"YES"<<endl;
                cout<<1<<" "<<i<<endl;
                ans = false;
                break;
            }
        }
        if(ans){
            cout<<"NO"<<endl;
        }
    }

}