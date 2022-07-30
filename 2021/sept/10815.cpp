#include<bits/stdc++.h>
using namespace std;
char buff[1000006];
int main(){
    freopen("in.txt","r",stdin);
    map<string,int>tree;
    while(gets(buff)){//takes each char until find first space;
        //cout<<buff<<endl;
        string str = "";
        for(int i=0;buff[i];i++){
            if(isalpha(buff[i])){
                str +=tolower(buff[i]);
            }
            else{
                str +=" ";
            }
        }
        //cout<<str<<endl;
        stringstream sin(str);
        string token;
        while(sin>>token){
            //cout<<token<<endl;
            tree[token]++;
        }
    }
    for(map<string,int> :: iterator it = tree.begin();it!=tree.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
