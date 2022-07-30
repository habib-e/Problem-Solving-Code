
#include<bits/stdc++.h>
using namespace std;
int r[101],c[101];
int mat[100][100];
int temp[101];
bool ck(int n)
{
    if(c[n]!=n)
        return false;
    return true;
}
void trans(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        temp[i]=c[i];
        c[i]=r[i];
        r[i]=temp[i];
    }
}
int main()
{
    int i,j,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>mat[i][j];
            }
        }
        for(i=1; i<=n; i++)
        {
            r[i]=mat[i][1];
        }
        for(j=1; j<=n; j++)
        {
            c[i]=mat[1][i];
        }
        int cnt=0;
        for(i=n; i>0; i--)
        {
            if(!ck(i))
            {
                trans(i),cnt++;
            }
        }
        cout<<cnt<<endl;

    }


    return 0;
}
