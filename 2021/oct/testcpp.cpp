#include <bits/stdc++.h>
using namespace std;
bool E(void);
bool A(void);
bool F(void);
char input [100];
int i;
int main()
{
    cout<<("Enter the Input :\n ");
    cin>>input;

    if(E())
    {
        if (input[i]=='\0')
        {
            cout<<("String is Successfully passed:\n ");

        }
        else
        {
            cout<<("String is not Successfully passed:\n ");
        }
    }
}
bool E()
{
    if(F())
    {
        return true;
    }
    else
    {
        return false;
    }
    if(A())
    {
        return true;
    }
    else
    {

        return false;
    }

}
bool A()
{
    if (input[i]=='+')
    {
        i++;
        if (F())
        {
            return true;

        }
        else
        {
            return false;
        }
        if(A())
        {
            return true;
        }
        else
        {

            return false;
        }

    }
}
bool F()
{
    if (input[i]=='a')
    {
        i++;
    }
    else if (input[i]='(')
    {
        i++;
        if(E())

        {
            if (input[i]=')')
            {
                i++;
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }

    }
    else
    {
        return false;
    }
}

