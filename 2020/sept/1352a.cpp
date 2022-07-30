#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,t;
    cin>>t;
    vector<int>v;
    int cnt=0;
    while(t--)
    {
        cin>>n;
        cnt=0;
        v.clear();
        int rem=n;
        int cise=0;
        while(n)
        {
            int sunno=10;
            rem=n%10;
            if(rem!=0)
            {

                sunno=pow(10,cise);
                v.push_back(rem*sunno);
                cnt++;
            }
            cise++;
            n/=10;
        }
        cout<<cnt<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
