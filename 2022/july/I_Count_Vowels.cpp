#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nn "\n"
#define MAX 1000005
#define mod 1000000007
ll ar[MAX];
// count the vowels in a string using function
int count_vowels(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
    }
    return count;
}
int32_t main()
{
    string s;
    getline(cin, s);
    cout << count_vowels(s) << nn;

    return 0;
}