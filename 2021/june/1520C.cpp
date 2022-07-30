#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2){
            cout<<-1<<endl;
            continue;
        }
        int ans=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<ans<<" ";
                ans+=2;
                if(ans>n*n)
                    ans=2;
            }
            cout<<endl;
        }
    }





}
