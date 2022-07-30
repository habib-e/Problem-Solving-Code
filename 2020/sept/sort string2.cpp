#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 76;
void sortString(string &str)
{
    int charCount[MAX_CHAR] = {0};
    for (int i=0; i<str.length(); i++)
        charCount[str[i]-'0']++;
    for (int i=0;i<MAX_CHAR;i++)
        for (int j=0;j<charCount[i];j++)
            cout << (char)('0'+i);
}
int main()
{
    string s = "JFJS2141fjsl";
    sortString(s);
    return 0;
}
