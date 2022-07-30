#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<int>num_con;
    stack<string>str_con;
    str_con.push("");
    int str_int=0;
    for(int i=0,n=s.size(); i<n; i++){
        if(s[i]>='0' and s[i]<='9'){
            str_int=str_int*10+s[i]-'0';//for converting string to integer
        }
        else if(s[i]=='['){
            num_con.push(str_int);//pushing numbers into stack
            str_int=0;
            str_con.push("");
        }
        else if(s[i]==']'){
            string m=str_con.top();//containers top string will multiply by
            str_con.pop();              // the number of count time
            int count=num_con.top();
            num_con.pop();
            while(count--){
                str_con.top()+=m; //adding up stack's top most to down most string
            }                        //last ']' will make the final ans
        }
        else{
            str_con.top().push_back(s[i]);
        }
    }
    cout<<str_con.top()<<endl;
}


/*
    for encoded string 3[a2[c]]
        i=0
        str_int=3;
        i=1
        num_con=3
        str_con=empty string
        i=2
        str_con=a
        i=3
        str_int=2
        i=4
        num_con=3,4
        i=5
        str_con=a,c
        i=6
        m=c     str_con=a   count=2
        num_con=3    str.con=acc(loop->2)
        i=7
        m=acc   str_con=""  count=3
        num_con=empty
        str_con=accaccacc(loop->3)

*/
