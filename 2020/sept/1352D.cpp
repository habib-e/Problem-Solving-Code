#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v;
        v.clear();
        int n,cnt=0;
        cin>>n;
        int ar[1001];
        int i,j;
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }
        int a=0,b=0;
        int x=0;
        int suma=0,sumb=0;
        bool go=true;
        for(i=1; i<=n;)
        {
            if(go)
            {

                a=0;

                if(ar[i]>b)
                {
                    a+=ar[i];
//                    x=ar[i];
                    cnt++;
//                    v.push_back(x);
                    i++;
                }
                else
                {
                    while(a<=b && i<=n)
                    {
                        a+=ar[i];
//                        x=ar[i];
//                        v.push_back(x);
                        i++;
                    }
                    cnt++;
                }
                suma+=a;
                go=false;
            }
            else
            {

                b=0;

                if(ar[n]>a)
                {
                    b+=ar[n];
//                    x=ar[n];
                    cnt++;
//                    v.push_back(x);
                    n--;
                }
                else
                {
                    while(a>=b && i<=n)
                    {
                        b+=ar[n];
//                        x=ar[n];
//                        v.push_back(x);
                        n--;
                    }
                    cnt++;
                }
                sumb+=b;
                go=true;
            }
        }
//        sort(v.begin(),v.end());
//        sort(ar+1,ar+n+1);
//        for(i=1; i<=n; i++)
//        {
//            int flag=0;
//            for(int j=0; j<n; j++)
//            {
//                if(ar[i]!=v[j])
//                {
//                    flag=1;
//                    break;
//                }
//            }
//            if(flag)
//            {
//                b+=ar[i];
//                cnt++;
//            }
//        }
        cout<<cnt<<" "<<suma<< " "<<sumb<<endl;

    }

}
