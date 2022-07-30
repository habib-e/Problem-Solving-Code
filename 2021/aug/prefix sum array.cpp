#include<bits/stdc++.h>
using namespace std;
void prefixsum(int ar[],int n,int presum[]){

    //int presum[n+1];
    presum[0]=ar[0];
    for(int i=1;i<n;i++){
        presum[i] = ar[i] + presum[i-1];
    }
    //cout<<"Array sum is : "<<presum[n-1]<<endl;


}
int main(){
    int ar[]={2,3,3,4,23,4,34,2,34,234,2,4};
    int n = sizeof(ar)/sizeof(ar[0]);
    int presum[n];

    prefixsum(ar,n,presum);
    for(int i=0;i<n;i++){
        cout<<presum[i]<<" ";
    }

}
