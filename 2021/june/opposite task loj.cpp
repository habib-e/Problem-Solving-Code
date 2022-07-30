#include <bits/stdc++.h>
using namespace std;
int main() {
    int cases;
    scanf("%d", &cases);
    for (int caseno = 1; caseno <= cases; ++caseno) {
        int x;
        cin>>x;
        if(x&1){
            int y = x/2;
            cout<<y<<" "<<x-y<<endl;
        }
        else{
            cout<<x/2<<" "<<x/2<<endl;
        }
    }
    return 0;
}
