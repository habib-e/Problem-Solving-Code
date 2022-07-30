#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    double s = ceil((double)(n*n)/2);
    if(k>s){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                if((i+j)%2==0 and k-->0){
                    
                    cout<<"L";
                }
                else{
                    cout<<"S";
                }
            }
            cout<<endl;
        }
    }





}