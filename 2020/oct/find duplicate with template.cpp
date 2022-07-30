#include<numeric>
#include<iostream>
#include<array>
using namespace std;
template <typename it>
int finddup(it start,it finish)
{
    auto size=distance(start,finish);
    int actual_sum=accumulate(start,finish,0);
    int expected_sum=size*(size-1)/2;
    return actual_sum-expected_sum;
}
int main()
{

    array<int,5> arr={{1,2,3,4,4}};
    cout<<"The duplicate element is : "<<finddup(arr.begin(),arr.end());
    return 0;
}
