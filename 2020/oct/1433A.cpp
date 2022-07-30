#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,i;
    int ar[100],br[100];
    cin>>t;
    while(t--)
    {
        int mx=0;
        cin>>x;
        for(i=1; i<=x; i++)
        {
            cin>>ar[i];
            br[i]=ar[i];
            mx=max(mx,ar[i]);
        }
        sort(br+1,br+x+1);
        //cout<<br[1]<< " "<<br[x]<<endl;
//        for(i=1;i<=x;i++)
//        {
//            cout<<br[i]<<endl;
//        }
        for(i=1; i<=x; i++)
        {
            if(ar[i]==mx)
            {
                if(i==1 && (ar[i]>ar[i+1]))
                {
                    cout<<i<<endl;
                    break;
                }
                else if(i==x && (ar[i]>ar[i-1]))
                {
                    cout<<i<<endl;
                    break;
                }
                else if(br[1]==br[x])
                {
                    cout<<-1<<endl;
                    break;
                }
                else
                {
                    if(((ar[i]>ar[i-1] || ar[i]>ar[i+1]) && (ar[i]==mx)))
                    {
                        cout<<i<<endl;
                    }
                }
            }

        }
    }

}
