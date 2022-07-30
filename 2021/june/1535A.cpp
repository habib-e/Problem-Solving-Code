#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int a,b,c,d,x,y;
        cin>>a>>b>>c>>d;
        x=max(a,b);
        y=max(c,d);
        if((x>c || x>d) and (y>a || y>b)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     }

}
