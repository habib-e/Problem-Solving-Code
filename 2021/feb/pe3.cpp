#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n = 600851475143ULL;
    unsigned long long i;
    for(i = 2ULL;i<n;i++){
        while(n%i==0){
            n/=i;
        }
    }
    cout<<n<<endl;
}