#include <bits/stdc++.h>
using namespace std;
struct optimyzation
{
    char l;
    string r;
};
int main()
{
    vector<optimyzation> vt(50); //1.l 1.r 2.l 2.r 3 4 5
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i].l >> vt[i].r;
    }

    int flag;
    for (int m = 0; m < n; m++) // input traverse
    {
        string st;
        st = vt[m].r;
        for (int j = m + 1; j < n; j++)
        {
            if (st == vt[j].r)
            {
                flag = 0;
                for (int i = 0; i < j; i++)
                {
                    for (int k = 0; k < st.size(); k++)
                    {
                        if (vt[i].l == st[k]) // if changes occur then we don't have to replace ,
                        {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag != 1) // opposite of line 32 condition
                {
                    vt[j].r.clear();
                    vt[j].r.push_back(vt[m].l);
                }
            }
        }
    }
    cout << endl;
    cout << "The resultant intermediate codes after elimination of subexpression ==> ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << vt[i].l << " = " << vt[i].r << endl;
}
/*6
x a+b
y b+c
z x+y
a b+c
m a+b
n b+c
*/

