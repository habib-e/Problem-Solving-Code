/*    ***Bismillahir Rahmanir Rahim***   */
#include<bits/stdc++.h>
using namespace std;
typedef         long long            ll;
typedef         long double          ld;
typedef         unsigned long long   ull;
#define         pb                   push_back
#define         PB                   pop_back
#define         nn                   "\n"
#define 		 O_O 				  ios_base::sync_with_stdio(false); cin.tie(NULL)
#define         all(p)               p.begin(),p.end()
#define         zz(v)                (ll)v.size()
#define         ss                   ' '
#define         arrsize(a)           (sizeof(a)/sizeof(a[0]))
#define         S(a)                 scanf("%lld",&a)
#define         SS2(a,b)              scanf("%lld %lld",&a,&b)
#define         SS3(a,b,c)            scanf("%lld %lld %lld",&a,&b,&c)
#define         gcd(a,b)             __gcd(a,b)
#define         lcm(a,b)             (a*b)/gcd(a,b)
#define         pi                   acos(-1.0)
typedef         pair <int,int>       pii;
typedef         pair <ll,ll>         pll;
typedef         vector< pair <ll,ll> >    vpll;
typedef         vector<ll>           vll;
typedef         map<string,ll>       msl;
typedef         map<ll,ll>           mll;
#define         yes                  cout<<"YES\n"
#define         no                   cout<<"NO\n"
#define         MAX                  1000005
const int N = 2e5+50;
const int M = 1e6;
const ll oo = 1e18;
const int mod = 1e9+7;
#define precision(a) fixed << setprecision(a)
int main()
{ 
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                c++;
            }
        }
        if(n==1 && s[0]=='?'){
            cout<<"R"<<endl;
            continue;
        }
        if(c==0){
            cout<<s<<endl;
            continue;
        }
        if(c==s.size()){
            for(int i=1;i<=n;i++){
                if(i & 1){
                    cout<<"R";
                }
                else{
                    cout<<"B";
                }
            }
            cout<<endl;
            continue;
        }
        int st = 0;
        while(st<n){
            if(s[st]=='?'){
                if(st-1>=0){
                    if(s[st-1]=='B'){
                        s[st]='R';
                    }
                    else if(s[st-1]=='R'){
                        s[st]='B';
                    }
                }
            }
            st++;
        }
        st = n-1;
        while(st>=0){
            if(s[st]=='?'){
                if(st+1<n){
                    if(s[st+1]=='B'){
                        s[st]='R';
                    }
                    else if(s[st+1]=='R'){
                        s[st]='B';
                    }
                }
            }
            st--;
        }
        cout<<s<<endl;
        // ll n;
        // cin>>n;
        // string s;
        // cin>>s;
        // if(s[0]=='?'){
        //     if(s[1]=='B'){
        //         s[0]='R';
        //     }
        //     else{
        //         s[0]='B';
        //     }
        // }
        // if(s[0]=='B'){
        //     b++;
        // }
        // else{
        //     r++;
        // }
        // for(int i=1;i<s.size();i++){
        //     if(s[i]=='?'){
        //         int lb=0,lr=0,rb=0,rr=0;
        //         if(s[i-1]=='B'){
        //             b++;
        //             int j=i-1;
        //             int k=i+1;
        //             while(s[j]=='B'){
        //                 j--;
        //                 lb++;
        //             }
        //             while(s[k]!='R'){
        //                 k++;
        //                 rb++;
        //             }
        //             if(lb)
        //         }
        //         else{
        //             s[i]='B';
        //             r++;
        //             int j=i-1;
        //             int k=i+1;
        //             while(s[j]=='R'){
        //                 j--;
        //                 lr++;
        //             }
        //             while(s[k]!='B'){
        //                 k++;
        //                 rr++;

        //             }
        //         }
        //     }
        //     else{
        //         if(s[i]=='B'){
        //             b=0;
        //         }
        //         else{
        //             r=0;
        //         }
        //     }
        // }
        // cout<<s<<endl;
    
    }

return 0;
}