#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = abs(a - b);
        string ss = to_string(ans);
        bool flag = false;
        if (ss[ss.size() - 1] != '0')
        {
            flag = true;
        }
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        ss[ss.size() - 1] = '\0';
        if (flag)
        {
            stringstream inshaallah(ss);
            int x = 0;
            inshaallah >> x;
            cout << x + 1 << endl;
        }
        else
        {
            cout << ss << endl;
        }
    }
}
