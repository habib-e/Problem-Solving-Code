#include<bits/stdc++.h>
using namespace std;
bool isokey(string s){
    bool flag = false;
    if (((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') || s[0] == '_'))
        flag = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '_'))
            continue;
        else{
            flag = false;
            break;
        }
    }

    if(flag==true)
        return true;
    else
        return false;
}
int main(){

    string s;
    while(cin>>s){
        if(isokey(s)){
            cout<<"Valid"<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }


    return 0;
}



