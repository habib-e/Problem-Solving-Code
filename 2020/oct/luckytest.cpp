#include<bits/stdc++.h>
#define ll long long
using namespace std;
//int calSum(int n)
//{
//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        sum = sum + (1 << i);
//    }
//    return sum;
//}
int main()
{
    ll n;
    cin>>n;
    cout<<(2LL << n) - 2;

//    vector<int> lucky;
//    vector<int> current;
//    vector<int> next;
//    current.push_back(7);
//    current.push_back(8);
//    lucky.push_back(7);
//    lucky.push_back(8);
//    int value=0;
//    while(value < n)
//    {
//        for(unsigned int i=0; i<current.size(); ++i)
//        {
//            value=current[i]*10+7;
//            next.push_back(value);
//            lucky.push_back(value);
//            value=current[i]*10+8;
//            next.push_back(value);
//            lucky.push_back(value);
//        }
//
//        current=next;
//        next.clear();
//    }
//    for(int i=0;i<lucky.size();i++)
//    {
//        cout<<lucky[i]<<" ";
//    }
}
