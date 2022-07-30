/* ***Bismillahir Rahmanir Rahim*** */
#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    int target, n;
    int arr[n];
    n=sizeof(arr);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>target;
 
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
 
    int right=0;
    int left=n-1;
    while(right<left){
        if(arr[right]+arr[left]>target){
            left--;
        }
        if(arr[right]+arr[left]<target){
            right++;
        }
        if(arr[right]+arr[left]==target){
            cout<<right;
        }
    }
    return 0;
}
