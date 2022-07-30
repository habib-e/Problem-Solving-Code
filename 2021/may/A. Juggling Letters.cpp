#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,d,e,f,g,h,i,j,k,l,t,x,y,m,n;
int main()
{
    cin>>t;
    
    while(t--){
        cin>>n;
        vector<int>fre(26);
         for(i=0;i<n;i++){
            string s;
            cin>>s;
            for(char ch : s){
                ++fre[ch - 'a'];
            }
        }
        bool ans = true;
        for(i=0;i<26;i++){
            if(fre[i]%n != 0){
                ans = false;
                break;
            }
        }
        cout<< ( ans ? "YES" : "NO")<<endl;
    }

    return 0;
}
