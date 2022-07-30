#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        //unordered_map<int,int>mp;
        int ar[n+1];
        int sum =0,res=0;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
            //mp[ar[i]]++;
        }
//        int mx = INT_MIN;
//        for(auto x : mp){
//            mx = max(mx,x.second);
//        }

        if(sum%n!=0){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(ar[i]>sum/n){
                res++;
            }
        }
//        cout<<res<<endl;

    }
    return 0;
}
