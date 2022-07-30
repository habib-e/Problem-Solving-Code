#include<bits/stdc++.h>
using namespace std;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
    FASTIO;
    int t = 0; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        if(n<2){
            cout << "0\n"; continue;
        }
        int ans = 0;
        while(n>=2)
        {
            n-=2;
            int i=1;
            while((i*3)+2<=n){
                    //cout<<"i*3+2 : "<<(i*3)+2<<endl;
                n -= (i*3)+2;
            //cout<<"n : "<<n<<endl;
                i++;
            }
            ans++;
            //cout<<"ans : " << ans << nl;
        }
        cout<<ans << nl;
    }

    return 0;
}
