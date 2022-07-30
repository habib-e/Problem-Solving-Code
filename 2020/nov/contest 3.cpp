#include <bits/stdc++.h>
using namespace std;
string decodeString(string s)
{
    string cur = "";
    stack<string> st;
    stack<int> num;
    int sum;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum = 0;
            while (s[i] != '[')
                sum = sum * 10 + s[i++] - '0';
            st.push(cur);
            num.push(sum);
            cur = "";
        }
        else if (s[i] == ']')
        {
            string temp = st.top();
            for (int j = 0; j < num.top(); j++)
                temp += cur;
            cur = temp;
            st.pop();
            num.pop();
        }
        else
            cur += s[i];
    }
    return cur;
}
int main()
{
    string s;
    cin >> s;
    cout << decodeString(s);
}
