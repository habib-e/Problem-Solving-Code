#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        set<int>st;
        cin>>n;
        int i,x;
        for(i=0;i<n;i++){
            cin>>x;
            st.insert(x);
        }
        cout<<st.size()<<endl;
    }

    return 0;
}