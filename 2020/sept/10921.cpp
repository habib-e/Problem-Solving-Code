#include<bits/stdc++.h>
using namespace std;

#define n  128
static char ar[n] = "22233344455566677778889999";
static char table[n];
static char input[n];

int main()
{
    int k=0;
    for(int i='A';i<='Z';i++)
        table[i]=ar[k++];

    table['-']='-';
    table['0']='0';
    table['1']='1';

    while(gets(input)){
        for(int i=0;input[i];i++)
            cout<<table[input[i]];
        cout<<endl;
    }
    return 0;
}
