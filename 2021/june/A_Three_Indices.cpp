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



    int n,i,j,k;
    int ar[1003];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    bool flag=false;
    for(i=1;i<n-1;i++){
        if(ar[i-1]<ar[i] and ar[i]>ar[i+1]){
            flag=true;
            break;
        }
        // for(j=i+1;j<n;j++){
        //     if(ar[i]<ar[j]){

        //         // for(k=j+1;k<n;k++){
        //         //     if(ar[j]>ar[k]){
        //         //         flag=true;
        //         //         break;
        //         //     }
        //         // }
        //     }
        //     if(flag){
        //         break;
        //     }
        // }
        // if(flag){
        //     break;
        // }
    }
    if(flag){
        cout<<"YES"<<endl<<i<<" "<<i+1<<" "<<i+2<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}

return 0;
}




































/* Final check before submit :
1. array size or integer overflow,like uninitialised 0 index.
2. Think twice,code once.check all possible counter test case.
3. Be careful about corner case! n=1?k=1? something about 0?
4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?
5. if got WA than remember that you are missing something common.
*** Be confident!!! who knows? may be your one step back to AC ***
* IF WA???
1. corner case! n=1?k=1? something about 0?
2. check code(avoid stupid mistake)
3. read the statement again(if there any missing point???)
4. check the idea(check all possible counter test case again!!!)
5. be calm,don't be panic!!!.(***this problem not going to decide your future***)
6. don't waste too much time. move to next problem
*/