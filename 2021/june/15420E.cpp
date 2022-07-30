#include<bits/stdc++.h>
using namespace std;
char s[1000006];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin>>(s+1);
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(s[i]=='*'){
                cnt++;
            }
        }
        int c=0,take=0;
        cnt = (cnt+1)/2;
        for(int i=1;i<=n;i++){
            if(s[i]=='*'){
                c++;
                if(c==cnt){
                    take = i;
                    break;
                }
            }
        }
        long long d=0,ans=0;
        for(int j = take;j>=1;j--){
            if(s[j]=='.'){
                d++;
            }
            else{
                ans+=d;
            }
        }
        int e=0;
        for(int j=take+1;j<=n;j++){
            if(s[j]=='.'){
                e++;
            }
            else{
                ans+=e;
            }
        }
        cout<<ans<<endl;
    }
//very interesting solution
}
