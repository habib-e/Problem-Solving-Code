#include<bits/stdc++.h>
using namespace std;
int cr[10001];
int ar[1001];
int br[1001];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<m;i++)
        cin>>br[i];
    int siz_ar=n;
    int siz_br=m;
    int k=0;
    for(int i=0,j=0; i<siz_ar,j<siz_br; i++,j++)
    {
        cr[k]=ar[i];
        k++;
        cr[k]=br[j];
        k++;
    }
    sort(cr,cr+siz_ar+siz_br);
    reverse(cr,cr+siz_ar+siz_br);
    for(int i=0; i<siz_ar+siz_br; i++)
    {
        cout<<cr[i]<<" ";
    }
    return 0;
}
