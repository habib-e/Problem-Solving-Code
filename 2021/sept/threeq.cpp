#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,o1=0,o2=0,z1=0,z2=0;
    while(t--){
        o1=0,o2=0,z1=0,z2=0;
        for(int i=1;i<=3;i++){
            cin>>a;
            if(a==1){
                o1++;
            }
            else{
                z1++;
            }
        }
        for(int i=1;i<=3;i++){
            cin>>b;
            if(b==1){
                o2++;
            }
            else{
                z2++;
            }
        }
        if(o1==o2 and z1==z2){
            cout<<"Pass"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
    }


}
