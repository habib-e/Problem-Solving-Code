#include<bits/stdc++.h>
using namespace std;
#define Habib 080
int i=0;
char l[100];
bool S();
bool A();
bool D();
bool S()
{
    if(A())
    {
        if(D())
            return true;
        else
        {
            cout<<"not Matched. Backtrack to S"<<endl;
            return false;
        }
    }
    else
        {
            cout<<"not Matched. Backtrack to S"<<endl;
            return false;
        }
}
bool A()
{
    if(l[i]=='b')
    {
        cout<<"matched b"<<endl;
        i++;
        if(D())
        {
            if(l[i]=='a')
            {
                cout<<"matched a"<<endl;
                i++;
            }
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;

}
bool D()
{
    if(l[i]=='a')
    {
        cout<<"matched a"<<endl;
        i++;
        if(D()){
            return true;
        }
        else{
            return false;
        }
    }
    else if(l[i]=='c')
    {
        cout<<"matched c"<<endl;
        i++;
        return true;
    }
    else
        false;
}
main()
{
    cout<<"Enter the input string : ";
    gets(l);
    if(S())
    {
        cout<<"The string is successfully parsed."<<endl;
    }
    else
    {
        cout<<"The string is not successfully parsed."<<endl;
    }
}


