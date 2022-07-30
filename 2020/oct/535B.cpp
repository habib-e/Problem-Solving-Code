#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j;
    int ar[10112];
    cin>>t;
    while(t--)
    {
        double x;
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        int f=0;
        for(i=1;i<=n;i++)
        {
            for(j=i;j<=n;j++)
            {
                x+=(ar[j]/(double)j);
                double k,y;
                k=m;
                y=x;
                if(k==y){
                    f=1;
                    break;
                }
            }
            if(f)
                break;
        }
        if(f==0)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;


    }
}
