
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int dif=n-10;
    if(dif<=0)
        cout<<0;
    else if(dif==1 or dif==2 or dif==3 or dif==4 or dif==5 or dif==6 or dif==7 or dif==8 or dif==9 or dif ==11)
        cout<<4;
    else if(dif==10) cout<<15;
    else cout<<0;

    return 0;
}
