#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x,a,b;
    while(t--)
    {
        cin>>x>>a>>b;
        cout<<(a+((100-x)*b))*10<<endl;
    }
}
