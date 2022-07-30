
#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(string &s,int n){
    vector<char> vec;
    Declare a vector name vec
    which is character type
    unordered_map<char,int> exists;
    int index = 0;
    for(int i=0;i<n;i++){
            IF exists string index is equal to 0 then
                push string in vec vector
                increment the exist map string index
        if(exists[s[i]]==0) abc
        {
            vec.push_back(s[i]); a,b,c
            exists[s[i]]++;a=1,b=1,c=1
        }
    }
    FOR x to last index of vec
        print output to the user
    for(auto x: vec)
        cout << x;
}

int main(){
    string str;
    cin >> str;
    removeDuplicates(str,str.length());
    return 0;
}
