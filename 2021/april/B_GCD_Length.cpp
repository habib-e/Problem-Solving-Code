#include <bits/stdc++.h>
using namespace std;
//memset(ar,-1,sizeof(ar));
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define nn "\n"
#define ss ' '
#define arrsize(a) (sizeof(a) / sizeof(a[0]))
#define yes cout << "YES\n"
#define no cout << "NO\n"
ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, vv, w, x, y, z;
const int N = 2e5 + 50;
const int M = 1e6;
int main()
{
    cin>>t;
    vector<ll>v;
    v.push_back(3);
    v.push_back(11);
    v.push_back(101);
    v.push_back(1009);
    v.push_back(10007);
    v.push_back(100003);
    v.push_back(1000003);
    v.push_back(10000019);
    v.push_back(100030001);
    while(t--){
        d=e=0;
        cin>>a>>b>>c;
        s=0;
        x=v[c-1];
        while(true){
            p=x;
            while(p>0){
                p/=10;
                s++;
            }
            if(s==a){
                d=x;
                break;
            }
            x*=2;
            s=0;
        }
        s=0;
        x=v[c-1];
        while(true){
            p=x;
            while(p>0){
                p/=10;
                s++;
            }
            if(s==b){
                e=x;
                break;
            }
            x*=3;
            s=0;
        }
        cout<<d<<" "<<e<<endl;
    }
}