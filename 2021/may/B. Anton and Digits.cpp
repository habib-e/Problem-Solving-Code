 #include<bits/stdc++.h>
 using namespace std;
 int main(){
     int k2,k3,k5,k6,a,b,ans=0;
     cin>>k2>>k3>>k5>>k6;
     a=min(k2,min(k5,k6));
     ans+=(a*256);
     k2-=a;
     b=min(k2,k3);
     ans+=(b*32);
     cout<<ans<<endl;



     return 0;
 }