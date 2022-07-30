#include <bits/stdc++.h>
using namespace std;
template<class T>
void merge_sort(T ar[],int beg,int end)
{
    if(beg==end) return;
    int mid=beg+(end-beg)/2;
    merge_sort(ar,beg,mid);
    merge_sort(ar,mid+1,end);
    int i=beg,j=mid+1,l=end-beg+1,k=0;
    T *temp = new T[l];
    for(k=0;k<l;k++)
    {
        if(j>end || (i<= mid && ar[i]<ar[j]))
        {
            temp[k]=ar[i];
            i++;
        }
        else
        {
            temp[k]=ar[j];
            j++;
        }
    }
    for(k=0,i=beg;k<l;k++,i++) ar[i] = temp[k];

    delete temp;

}

int main() {
    int siz;
    cin>>siz;
    int ar[siz+11];
    for(int i=0;i<siz;i++) cin>>ar[i];
    merge_sort(ar,0,siz-1);

    for(int i=0;i<siz;i++) cout<<ar[i]<<" ";

    return 0;
}
