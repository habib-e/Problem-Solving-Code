#include<iostream>
#include<algorithm>
using namespace std;
struct Job
{
   char id;
   int finish;
   int profit;
};
bool cmp(Job a, Job b)
{
     return (a.profit > b.profit);
}
void JobS(Job arr[], int n)
{
    sort(arr, arr+n, cmp);
    int result[n];
    bool avail[n];
    for (int i=0; i<n; i++)
        avail[i] = false;
    for (int i=0; i<n; i++)
    {
       for (int j=min(n, arr[i].finish)-1; j>=0; j--)
       {
          if (avail[j]==false)
          {
             result[j] = i;
             avail[j] = true;
             break;
          }
       }
    }
    for (int i=0; i<n; i++)
       if (avail[i])
         cout << arr[result[i]].id << " ";
}
int main()
{
    Job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Maximum profit sequence of jobs are : \n";
    JobS(arr, n);
    return 0;
}
