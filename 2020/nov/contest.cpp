#include<bits/stdc++.h>
using namespace std;
string decoded_string(string s)
{
    stack<int>stk1;
    stack<char>stk2;
    string t="",r="";
    for (int i=0;i<s.length();i++)
    {
        int count=0;
        if(s[i]==']'){
            t="";
            count=0;
            if(!stk1.empty()){
                count=stk1.top();
               stk1.pop();
            }
            while(!stk2.empty() && stk2.top()!='['){
                t=stk2.top()+t;
                stk2.pop();
            }
            if(!stk2.empty() && stk2.top()=='[')
                stk2.pop();
            for(int j = 0;j<count;j++)
                r=r+t;
            for(int j=0;j<r.length();j++)
                stk2.push(r[j]);
            r="";
        }
        else if(s[i]=='['){
            if(s[i-1]>='0' && s[i-1]<='9')
                stk2.push(s[i]);
            else{
                stk2.push(s[i]);
               stk1.push(1);
            }
        }
        else if(s[i]>='0' && s[i]<='9'){
            while(s[i]>='0' && s[i]<='9'){
                count=count*10+s[i]-'0';
                i++;
            }
            i--;
           stk1.push(count);
        }
        else
            stk2.push(s[i]);
    }
    while(!stk2.empty()){
        r=stk2.top()+r;
        stk2.pop();
    }
    return r;
}
int main()
{
    string s;
    cin>>s;
    cout<<decoded_string(s)<<endl;
    return 0;
}
