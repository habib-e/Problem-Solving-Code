#include<bits/stdc++.h>
using namespace std;
int partition(int ar[],int beg,int end)
{
    int pivot = ar[end];
    int pivIn=beg,i;
    for(i=beg;i<end;i++)
    {
        if(ar[i]<=pivot)
        {
            if(pivIn!=i) swap(ar[i],ar[pivIn]);

            pivIn++;
        }
    }
    if(pivIn!=end) swap(ar[pivIn],ar[end]);

    return pivIn;
}
int qui_sort(int ar[],int beg,int end)
{
    if(beg<end)
    {
        int pivIn=partition(ar,beg,end);
        qui_sort(ar,beg,pivIn-1);
        qui_sort(ar,pivIn,end);
    }
}
int main()
{
    int siz;
    cin>>siz;
    int i;
    int ar[siz+11];
    for(i=0;i<siz;i++) cin>>ar[i];
    qui_sort(ar,0,siz-1);
    for(i=0;i<siz;i++) cout<<ar[i]<< " ";
    return 0;
}
