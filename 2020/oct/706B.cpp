#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int t,n,x,q,i;
int ar[100001];
int binarySearch(int arr[], int r, int x)
{
    int l=1;
    int pos=-1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if(arr[m] == x){
            pos=m;
            l=m+1;
        }
        else if(arr[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    if(pos!=-1)
        return pos;
    else
        return l-1;
}
int main()
{
    cin>>t;
    int ans;
    for(i=0;i<t;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+t+1);
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x;
        ans=binarySearch(ar,t,x);
        if(ans!=-1)
            cout<<ans-1+1<<endl;
        else
            cout<<0<<endl;
    }
}
