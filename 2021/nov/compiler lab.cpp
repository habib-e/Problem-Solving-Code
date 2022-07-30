#include <bits/stdc++.h>
using namespace std;
struct intermediate_code
{
    char l;
    string r;
};
int main()
{
    vector<intermediate_code> vt(50);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i].l >> vt[i].r;
    }
    int flag;
    for (int m = 0; m < n; m++)
    {
        string st;
        st = vt[m].r;  //b+c
        for (int j = m + 1; j < n; j++)
        {
            if (st == vt[j].r)
            {
                flag = 0;
                for (int i = m + 1; i < j; i++)
                {
                    for (int k = 0; k < st.size(); k++)
                    {
                        if (vt[i].l == st[k])
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
            }
            if (flag != 1)
            {
                vt[m].r[0] = vt[j].l;
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << vt[i].l << " " << vt[i].r << endl;
}