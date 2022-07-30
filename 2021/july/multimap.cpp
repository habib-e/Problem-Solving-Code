#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,int>mm;
    mm.insert({3,120});
    mm.insert({5,1021});
    mm.insert({7,1210});
    mm.insert({1,10});
    mm.insert({1,12});
    mm.insert({1,11});
    mm.insert({2,110});

    //cout<<mm.count(1)<<endl;
    for(auto i : mm){
        //cout<<i.first<<" " <<i.second<<endl;
        cout<<mm.count(i.first)<<endl;
    }
    //multimap<int,int>::iterator it;

    return 0;
}
