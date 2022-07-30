#include<bits/stdc++.h>
using namespace std;
#define Habib 080
int i=0;
char l[100];
bool E();
bool F();
bool A();
bool E()
{
    if(F())
    {
        if(A())

            return true;
        else
            return false;
    }
    else
        return false;
}
bool F()
{
    if(l[i]=='(')
    {
        i++;
        E();
    }
    else if(l[i]=='a')
    {
        i++;
        return true;
    }
    else if(l[i]==')')
    {
        i++;
        return true;
    }
    else
        return false;

}
bool A()
{
    if(l[i]=='+')
    {
        i++;
        if(F())
        {
            if(A())
            {
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
    else
        return true;
}
main()
{
    cout<<"Enter the input string : ";
    gets(l);
    if(E())
    {
        cout<<"The string is successfully parsed."<<endl;

    }
    else
    {
        cout<<"The string is not successfully parsed."<<endl;
    }
}
