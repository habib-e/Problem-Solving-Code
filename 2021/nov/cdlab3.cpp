#include <bits/stdc++.h>
using namespace std;
bool flag = 0;
bool delimiter(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
            ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
            ch == '[' || ch == ']' || ch == '{' || ch == '}' || ch == '\n')
        return (true);
    return (false);
}
bool arithmetic_operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/')
        return (true);
    return (false);
}
bool relational_operator(char ch)
{
    if (ch == '>' || ch == '<' || ch == '=')
        return (true);
    return (false);

}
bool validIdentifier(char *str)
{
    int count = 0;
    int n = strlen(str);
    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'))
        return false;
    for (int i = 0; i < n; i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_'))
            return false;
    }
    return true;
}
bool keyword(char *str)
{
    if (!strcmp(str, "if") || !strcmp(str, "else") ||!strcmp(str, "while") || !strcmp(str, "do") || !strcmp(str, "break") ||!strcmp(str, "continue") || !strcmp(str, "int")
        || !strcmp(str, "double") || !strcmp(str, "float") || !strcmp(str, "return") || !strcmp(str, "char") || !strcmp(str, "case") || !strcmp(str, "char") || !strcmp(str, "sizeof")
        || !strcmp(str, "long") || !strcmp(str, "short") ||!strcmp(str, "typedef") || !strcmp(str, "switch") || !strcmp(str, "unsigned") || !strcmp(str, "void") || !strcmp(str, "static")
        ||!strcmp(str, "struct") || !strcmp(str, "goto"))
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
        if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' &&str[i] != '8' && str[i] != '9')
            return false;
    }
    return true;
}
bool float_num(char *str)
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
    char *subStr = (char *)malloc(
                       sizeof(char) * (right - left + 2));
    for (i = left; i <= right; i++)
        subStr[i - left] = str[i];
    subStr[right - left + 1] = '\0';
    return (subStr);
}
bool separator(char ch)
{
    if (ch == ',' || ch == ';' || ch == '(' || ch == ')' || ch == '{' || ch == '}')

        return true;
    return false;
}
int main()
{
    char str[1000];
    const int mx = 1000;
    cin.get(str, mx, '@');
    int left = 0, right = 0;
    int len = strlen(str);
    while (right <= len && left <= right)
    {
        if (delimiter(str[right]) == false)
            right++;
        if (delimiter(str[right]) == true && left == right)
        {
            if (arithmetic_operator(str[right]) == true)
            {
                cout << endl;
                printf("'%c' IS AN ARETHMETIC OPERATOR\n", str[right]);
            }
            if (relational_operator(str[right]) == true)
            {
                cout << endl;
                printf("'%c' IS A RELATIONAL OPERATOR\n", str[right]);
            }
            else if (separator(str[right]) == true)
            {
                cout << endl;

                printf("'%c' IS A SEPARATOR\n", str[right]);
            }
            right++;
            left = right;
        }
        else if (delimiter(str[right]) == true && left != right || (right == len && left != right))
        {
            char *subStr = subString(str, left, right - 1);
            if (keyword(subStr) == true)
            {
                cout << endl;
                printf("'%s' IS A KEYWORD\n", subStr);
            }
            else if (float_num(subStr) == false)
            {
                cout << endl;
                printf("'%s' IS NOT A FLOATING POINT NUMBER \n", subStr);
            }
            else if (INT(subStr) == true)
            {
                cout << endl;
                printf("'%s' IS AN INTEGER NUMBER \n", subStr);
            }
            else if (float_number(subStr) == true)
            {
                cout << endl;
                printf("'%s' IS A VALID FLOATING POINT NUMBER \n", subStr);
            }

            else if (validIdentifier(subStr) == true)
            {
                cout << endl;
                printf("'%s' IS A VALID IDENTIFIER\n", subStr);
            }
            else if (validIdentifier(subStr) == false)
            {
                cout << endl;
                printf("'%s'IS NOT A VALID IDENTIFIER\n", subStr);
            }
            left = right;
        }
    }
    return (0);
}
