#include <bits/stdc++.h>
using namespace std;
#define nn cout << endl;
#define fio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
const int mx = 1000;
bool flag = 0;
bool delimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||ch == '/' || ch == ',' || ch == ';' || ch == '>' ||ch == '<' || ch == '=' || ch == '(' || ch == ')' ||ch == '[' || ch == ']' || ch == '{' || ch == '}' || ch == '\n')
        return (true);
    return (false);
}

bool arithmetic(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return (true);
    return (false);
}

bool relational(char ch)
{
    if (ch == '>' || ch == '<' || ch == '=')
        return (true);
    return (false);
}


bool INT(char *str)
{
    int len = strlen(str);

    if (len == 0)
        return (false);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' &&
                str[i] != '8' && str[i] != '9')
            return false;
    }
    return true;
}
bool Valid_float(char *str)
{
    int len = strlen(str);
    int count = 0;
    if (len == 0)
        return (false);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '.')
            count++;
    }
    if (count > 1)
    {
        return false;
    }
    else
        return true;
}

bool float_number(char *str)
{
    int i, len = strlen(str), count = 0;
    if (len == 0)
        return (false);
    for (i = 0; i < len; i++)
    {
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' && str[i] != '.')
            return (false);
    }
    return true;
}

char *subString(char *str, int left, int right)
{
    int i;
    char *subStr = (char *)malloc(sizeof(char) * (right - left + 2));

    for (i = left; i <= right; i++)
        subStr[i - left] = str[i];
    subStr[right - left + 1] = '\0';
    return (subStr);
}


int main()
{
    fio;
    string comment, strmain;
    char str1[1000];
    cin.get(str1, mx, '$');
    int n = strlen(str1);
    bool single_line = false;
    bool multi_line = false;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == '/' && str1[i + 1] == '/')
        {
            single_line = true;
        }
        else if (str1[i] == '/' && str1[i + 1] == '*')
        {
            multi_line = true;
        }
        else if (single_line == true && str1[i] == '\n')
        {
            single_line = false;
            comment += '\n';
            strmain+='\n';
        }
        else if (multi_line == true && str1[i] == '*' && str1[i + 1] == '/')
        {
            multi_line = false;
            i++;
            comment += '\n';
            comment += " ";
            strmain+='\n';

        }
        else if (multi_line || single_line)
        {
            if (str1[i] == '/' || str1[i] == '*')
            {
                continue;
            }
            else
                comment += str1[i];
        }
        else
            strmain += str1[i];
    }
    nn;
    cout << "Given proggram ==> ";
    nn;
    nn;
    cout << strmain;
    char str[strmain.length()];
    int i;
    for (i = 0; i < sizeof(str); i++)
    {
        str[i] = strmain[i];
    }
    nn;
    nn;
    cout<<"The token which were required are :";
    nn;
    int len = strlen(str);
    int left = 0, right = 0;
    while (right <= len && left <= right)
    {
        if (delimiter(str[right]) == false)// int main()
            right++;

        if (delimiter(str[right]) == true && left == right)// a<asas
        {
            if (arithmetic(str[right]) == true)
            {
                cout << endl;
                printf("'%c' ==>> IS AN ARETHMETIC OPERATOR\n", str[right]);
            }
            if (relational(str[right]) == true)
            {
                cout << endl;
                printf("'%c' ==>> IS AN ASSIGNMENT OPERATOR\n", str[right]);
            }
            right++;
            left = right;
        }
        else if (delimiter(str[right]) == true && left != right || (right == len && left != right))
        {
            char *subStr = subString(str, left, right - 1);
            if(subStr[0]!='1')
            {
                left=right;
                continue;
            }
            else
            {
                if (Valid_float(subStr) == false)
                {
                    cout << endl;
                    printf("'%s' ==>> IS NOT A VALID FLOAT NUMBER \n", subStr);
                }
                else if (INT(subStr) == true)
                {
                    cout << endl;
                    printf("'%s' ==>> IS AN INTEGER NUMBER \n", subStr);
                }

                else if (float_number(subStr) == true)
                {
                    cout << endl;
                    printf("'%s' ==>> IS A VALID FLOAT NUMBER  \n", subStr);
                }
                left = right;
            }

        }
    }
    return (0);
}


/*C program to find the sum
of first 10 natural numbers*/
/*
int i, n;
float a= 5.6, b = 1.5;
int sum = 0; //initialize sum to zero
for (i = 1; i <11; i=i+1)
{
sum = sum + i;
}


Given proggram ==>



int i, n;
float a= 5.6, b = 1.5;
int sum = 0;
for (i = 1; i <11; i=i+1)
{
sum = sum + i;
}

The token which were required are :

'=' ==>> IS AN ASSIGNMENT OPERATOR

'=' ==>> IS AN ASSIGNMENT OPERATOR

'1.5' ==>> IS A VALID FLOAT NUMBER

'=' ==>> IS AN ASSIGNMENT OPERATOR

'=' ==>> IS AN ASSIGNMENT OPERATOR

'1' ==>> IS AN INTEGER NUMBER

'<' ==>> IS AN ASSIGNMENT OPERATOR

'11' ==>> IS AN INTEGER NUMBER

'=' ==>> IS AN ASSIGNMENT OPERATOR

'+' ==>> IS AN ARETHMETIC OPERATOR

'1' ==>> IS AN INTEGER NUMBER

'=' ==>> IS AN ASSIGNMENT OPERATOR

'+' ==>> IS AN ARETHMETIC OPERATOR



*/
