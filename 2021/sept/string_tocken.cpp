#include <bits/stdc++.h>
using namespace std;
int main()
{

    string line;
    getline(cin,line);
    vector <string> tokens;
    stringstream check1(line);
    string substr;
    while(getline(check1, substr, ' '))
    {
        tokens.push_back(substr);
    }
    for(int i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';
}
nt
