#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    bool flag = false;
    for(int i=0;i<5;i++){
        cin>>b;
        if(a[0]==b[0]||a[1]==b[1]){
            cout<<"YES";
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"NO";
    }



    return 0;
}