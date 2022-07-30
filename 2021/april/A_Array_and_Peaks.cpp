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
ll a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
const int N = 2e5 + 50;
const int M = 1e6;
int main()
{
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>((n-1)/2)){
            cout<<-1<<endl;
            continue;
        }
        h=n;
        j=1;
        l = (k*2)+1;
        for(i=1;i<=n and l;i++,l--){
            if(i%2==0){
                cout<<h<<" ";
                h--;
            }
            else{
                cout<<j<<" ";
                j++;
            }
        }
        i=j;
        while(i<=h){
            cout<<i<<" ";
            i++;
        }
        cout<<endl;
    }
}