/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        if (n == 2)
        {
            cout << 2 << endl;
            continue;
        }

        int d = n / 3;

        if (n % 3 == 1)
        {

            while (d--) cout << 12;
            cout << 1 << endl;

            continue;
        }

        if (n % 3 == 2)
        {

            while (d--) cout << 21;
            cout << 2 << endl;

            continue;
        }


        while (d--) cout << 21;

        cout << endl;




    }

    return 0;
}
