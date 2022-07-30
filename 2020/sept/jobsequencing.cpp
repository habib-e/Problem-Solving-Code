#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prft[10],dedlin[10];
    int max_prft=0,n;
    cout<<"Enter Number Of JOBS : ";
    cin>>n;
    bool slot[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Profit : ";
        cin>>prft[i];
        cout<<"Finish Time : ";
        cin>>dedlin[i];
        cout<<endl;
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(prft[i]<prft[j])
            {
                swap(prft[i],prft[j]);
                swap(dedlin[i],dedlin[j]);
            }
        }
    }
    memset(slot,false,sizeof(slot));
    for(int i=0; i<n; i++)
    {
        for(int j=min(n,dedlin[i])-1; j>=0; j--)
        {
            if(slot[j]==false)
            {
                slot[j]=true;
                max_prft +=prft[i];
                break;
            }
        }
    }
    cout<<"Maximum Profit : "<<max_prft<<endl;
    return 0;
}
