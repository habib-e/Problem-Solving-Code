#include <bits/stdc++.h>
using namespace std;

int M;
bool comparator(char ch1, char ch2)
{
    int i = ch1 % M;
    int j = ch2 % M;
    return (i < j);
}
void printArray(char arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
char br[10001];
int main()
{
    char arr[] = { 'g', 'e', 'e', 'k', 's' };
    int n = sizeof(arr) / sizeof(arr[0]);
    M = 8;

    set<char>ar(arr,arr+n-1);
    int index=0;
    for(auto p : ar){
            br[index]=p;
    index++;
    }
    br[index]='\0';
    cout<<br<<endl;
    sort(arr, arr + n, comparator);
    printArray(arr, n);

    return 0;
}
