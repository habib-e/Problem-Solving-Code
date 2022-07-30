#include <bits/stdc++.h>
using namespace std;
int main()
{

    string line,s;
    while(getline(cin,s))
        line += s + "\n";
    vector <string> tokens;
    stringstream modified(line);
    string substr;
    // getline(modified, substr, '\n') didn't work
    while(getline(modified, substr, ' '))
    {
        tokens.push_back(substr);
    }
    for(int i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';
}
