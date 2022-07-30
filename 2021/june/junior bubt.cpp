
#include<bits/stdc++.h>
using namespace std;
void merge_sort(int *vc,int l, int h)
{
    if(l == h)
        return;
    int mid = (l + h) / 2;
    merge_sort(vc,l,mid);
    merge_sort(vc,mid+1,h);
    int tm[10010];
    for(int i = l, k = l, j = mid+1; k <= h;  ++k)
    {
        if(i == mid+1)//here was a bug
            tm[k] = *(vc + j), j++;
        else if(j == h+1)
            tm[k] = *(vc + i), i++;
        else if(vc[i] >= vc[j])
            tm[k] = *(vc + j), j++;
        else
            tm[k] = *(vc + i), i++;
    }
    for(int i = l; i <= h; ++i)
        *(vc + i) = tm[i];
}
int main()
{
    int vc[10010];
    int n, i = 0;
    while(cin >> n)
        vc[i++] = n;
    merge_sort(vc,0,i-1);
    vector < int > vcc;
    for(int j = 0; j < i; ++j);
    {
        cout << vc[j] << endl;
    }
    for(int i = 0; i < vcc.size(); ++i)
        cout << vcc[i] << endl;
    return 0;
}
