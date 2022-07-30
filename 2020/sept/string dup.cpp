#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(string &s,int n){
    vector<char> vec;
    unordered_map<char,int> exists;
    int index = 0;
    for(int i=0;i<n;i++){
        if(exists[s[i]]==0)
        {
            vec.push_back(s[i]);
            exists[s[i]]++;
        }
    }
    for(auto x: vec)
        cout << x;
}

//driver code
int main(){
    string str;
    cin >> str;
    removeDuplicates(str,str.length());
    return 0;
}
