#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i,j;
    int ar[101];
    cin>>n;
    if(1&n)
    {
        cout<<-1;
        return 0;
    }
    for(i=n; i>=1; i--)
        cout<<i<<" ";
    return 0;
}
