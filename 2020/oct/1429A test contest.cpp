#include<bits/stdc++.h>
using namespace std;
int n,i,x,t;
int mx;
int ar[1001];
int main( )
{
    cin>>t;
    while(t--)
    {
        int sum=0;
        int cnt=0;
        cin>>n;
        int x,y;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        for(i=2;i<=n;i++)
        {
            if(ar[i]==ar[i-1]){
                cnt++;
            }
        }
        if(cnt!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        sort(ar+1,ar+n+1);
        reverse(ar+1,ar+n+1);
        int w=n;
        for(i=1;i<=n;i++)
        {
            sum+=ar[i];
            if(sum==0)
            {
                swap(ar[i],ar[w]);
                w--;
            }
        }

        for(i=1;i<=n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
