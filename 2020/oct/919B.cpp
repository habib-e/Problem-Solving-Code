#include <bits/stdc++.h>
using namespace std;
vector<int>v;
 void findCount(int n, int sum) {

        int start = pow(10, n-1);
        int end = pow(10, n)-1;
        int count = 0;
        int i = start;

                while(i <= end) {

            int cur = 0;
            int temp = i;

            while( temp != 0) {
                cur += temp % 10;
                temp = temp / 10;
            }

            if(cur == sum) {
                v.push_back(i);
                count++;
                i += 9;
            }else
                i++;

        }

            //cout <<endl<< count<<endl;
//            for(int i=0;i<v.size();i++)
//            {
//                cout<<v[i]<<" ";
//            }

    }
int main() {
        int n = 4;
        int sum = 10;
        for(int i=1;i<=8;i++)
        {
            findCount(i,sum);
        }
        //cout<<v.size()<<endl;
        int k;
        cin>>k;
        cout<<v[k-1];


    return 0;
}
