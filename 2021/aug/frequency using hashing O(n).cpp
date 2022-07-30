
#include<bits/stdc++.h>
using namespace std;
void freq(int ar[],int n){

    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[ar[i]]++;
    }
    /*for(auto it : mp){
        cout<<it.first<<" -> "<<it.second<<endl;
    }
*/
    for(int i=0;i<n;i++){
        if(mp[ar[i]]!=-1){
            cout<<ar[i]<<" -> "<<mp[ar[i]]<<endl;
            mp[ar[i]]=-1;
        }
    }
}
int main(){
      int ar[]={1,2,3,4,5,67,66,5,2,4,3,3};
      int n = sizeof(ar)/sizeof(ar[0]);
      freq(ar,n);


    return 0;
}
