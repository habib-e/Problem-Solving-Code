#include <bits/stdc++.h>
using namespace std;
#define maxx 100000
struct activities
{
    int start, finish;
};
bool Compare(activities s1, activities s2)
{
    return (s1.finish < s2.finish);
}
void print(activities arr[], int n)
{
    sort(arr, arr+n, Compare);
    int i = 0;
    cout<<"Selected pair is : ";
    cout << arr[i].start << "," << arr[i].finish<<"   ";
    for (int j = 1; j < n; j++)
    {
      if (arr[j].start >= arr[i].finish)
      {
          cout << arr[j].start << ","<< arr[j].finish<<"   ";
          i = j;
      }
    }
}
int main()
{
    activities arr[maxx];
    int n;
    cout<<"Enter the number of Activity : ";
    cin>>n;
    cout<<"Enter starting and finishing time pairwise : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].start;
        cin>>arr[i].finish;
    }
    print(arr, n);
    return 0;
}
