#include <bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    for (int i = 0; i < 10; i++)
    {
        d.push_back(i);
    }
    for (int i = 10; i <= 19; i++)
    {
        d.push_front(i);
    }
    // for (auto x : d)
    // {
    //     cout << x << " ";
    // }
    //sort(d.begin(), d.end());
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
}