#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int a[100005],b[100005];
        int x1,y1,z1,x2,y2,z2,i,j;
        cin>>x1>>y1>>z1;
        cin>>x2>>y2>>z2;
        int in=0,bn=0;
        while(z1--)
            a[in++]=2;
        while(x1--)
            a[in++]=0;
        while(y1--)
            a[in++]=1;
        while(z2--)
            b[bn++]=2;
        while(y2--)
            b[bn++]=1;
        while(x2--)
            b[bn++]=0;
//        for(i=0;i<in;i++)
//            cout<<a[i]<<" ";
//        cout<<endl;
//        for(i=0;i<bn;i++)
//            cout<<b[i]<<" ";
        for(i=0;i<in;i++)
        {
            for(j=i;j<bn;j++)
            {
                if(a[i]==2)
                {
                    if(b[i]==1)
                    {
                        cout<<"আমি ওখানে গিয়েসিলাম  : "<<i<<endl;
                        sum+=2;
                        break;
                    }
                    else if(b[i]==2){
                        break;
                    }
                    else if(b[i]==0)
                    {
                        break;
                    }
                }
                else if(a[i]==0)
                {
                    break;
                }
                else if(a[i]==1)
                {
                    if(b[i]==2)
                    {

                        sum+=-2;
                        break;
                    }
                    else if(b[i]==1)
                    {
                        break;
                    }
                    else if(b[i]==0)
                    {
                        break;
                    }
                }
            }
        }
        cout<<sum<<endl;


    }
}
