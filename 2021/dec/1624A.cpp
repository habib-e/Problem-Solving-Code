#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxx = INT_MIN;
        int minn = INT_MAX;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            maxx = max(maxx,x);
            minn = min(minn,x);
        }
        cout<<maxx-minn<<endl;
    }

}
