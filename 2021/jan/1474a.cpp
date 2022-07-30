#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string b = "", a = "";
        cin >> b;
        int i = 0, sum = 0;
        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                a += '1';
                sum = 1;
                if (b[0] == '1')
                {
                    sum = 2;
                }
            }
            else
            {
                if ((b[i] == '1' or b[i] == '0') and sum == 2)
                {
                    if (b[i - 1] =='')
                        a += '0';
                    sum = 1;
                }
                else
                {
                    a += '1';
                    sum = 1;
                    if (b[i] == '1')
                    {
                        sum = 2;
                    }
                }
            }
        }
        cout << a << endl;
    }
}