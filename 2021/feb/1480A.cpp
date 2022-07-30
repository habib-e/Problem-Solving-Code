#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]!='a' and i%2==0){
                cout<<'a';
                continue;
            }
            else if(i%2==0){
                cout<<'b';
                continue;
            }
            if(s[i]!='z' and i%2==1){
                cout<<'z';
                continue;
            }
            else if(i%2==1){
                cout<<'y';
                continue;
            }
        }
        cout<<endl;

    }

}
