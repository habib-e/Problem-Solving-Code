#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int ar[100001];
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    int x=0,mx=0;
    for(i=0;i<n-1;i++){
        if(ar[i]<ar[i+1]){
            x++;
            mx = max(mx,x);
        }
        else{
            x=0;
        }
    }
    cout<<mx+1;
    return 0;
}