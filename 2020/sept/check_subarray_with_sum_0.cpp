#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int ar[1001];
    for(int i=1;i<=n;i++) cin>>ar[i];
    int cnt=1,ccnt=0;
    habib:
        sum=0;
        cnt++;
        int start=1,End=cnt;
        while(End<=n)
        {
            sum=0;
            accumulate(ar+start,ar+End,sum);
            if(sum==0)
                ccnt++;
            start++;
            End++;
        }
        if(cnt<=n)
            goto habib;
        cout<<ccnt;

}
