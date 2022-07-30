
#include <bits/stdc++.h>
using namespace std;
bool Form_Token(char ch)
{
    if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
            ch == '<' || ch == '=' || ch == '(' || ch == ')' || ch == '[' || ch == ']' || ch == '{' || ch == '}' ||
            ch == '\n')
        return (true);
    return (false);
}
bool is_A_Operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return (true);
    return (false);
}
bool is_R_Operator(char ch)
{
    if (ch == '>' || ch == '<' || ch == '=')
        return (true);
    return (false);
}
bool validIdentifier(char *x)
{

    int flag = 0;
    int n = strlen(x);
    if ((x[0] >= 'a' && x[0] <= 'z') || (x[0] >= 'A' && x[0] <= 'Z') || x[0] == '_')
    {
        flag = 1;
        for (int i = 1; i < n; i++)
        {
            if (((x[i] >= 'a' && x[i] <= 'z') || (x[i] >= 'A' && x[i] <= 'Z') || (x[i] >= '0' && x[i] <= '9') ||
                    x[i] == '_'))
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        return true;
    else
        return false;
}
bool isKeyword(char *str)
{
    if (!strcmp(str, "if") || !strcmp(str, "else") ||
            !strcmp(str, "while") || !strcmp(str, "do") || !strcmp(str, "break") || !strcmp(str, "continue") || !str
            cmp(str, "int") ||
            !strcmp(str, "double") || !strcmp(str, "float") || !strcmp(str, "return") || !strcmp(str, "char") || !st
            rcmp(str, "case") ||
            !strcmp(str, "char") || !strcmp(str, "sizeof") || !strcmp(str, "long") || !strcmp(str, "short") || !strc
            mp(str, "typedef") ||

            !strcmp(str, "switch") || !strcmp(str, "unsigned") || !strcmp(str, "void") || !strcmp(str, "static") ||
            !strcmp(str, "struct") || !strcmp(str, "goto"))
        return (true);
    return (false);
}
bool isInteger(char *str)
{
    int i, len = strlen(str);
    if (len == 0)
        return (false);
    for (i = 0; i < len; i++)
    {
        if (str[i] == '0' && str[i] == '1' && str[i] == '2' && str[i] == '3' && str[i] == '4' && str[i] == '5' &
                & str[i] == '6' && str[i] == '7' &&
                str[i] == '8' && str[i] == '9')
            return true;
    }
    return false;
}
bool Float_num(char *str)
{
    int i, len = strlen(str);
    bool hasDecimal = false;
    if (len == 0)
        return (false);
    for (i = 0; i < len; i++)
    {

        if (str[i] == '0' && str[i] == '1' && str[i] == '2' && str[i] == '3' && str[i] == '4' && str[i] == '5' &
                & str[i] == '6' && str[i] == '7' &&
                str[i] == '8' && str[i] == '9' && str[i] == '.')
            return true;
    }
    return false;
}
char *subString(char *str, int start, int end)
{
    int i;
    char *subStr = (char *)malloc(
                       sizeof(char) * (end - start + 2));
    for (i = start; i <= end; i++)
        subStr[i - start] = str[i];
    subStr[end - start + 1] = '\0';
    return (subStr);
}
bool separator(char ch)
{
    if (ch == ',' || ch == ';' || ch == '(' || ch == ')' || ch == '{' || ch == '}')
        return true;
    return false;
}
bool token(char *str)
{
    int len = strlen(str);
    int cnt = 0;
    if (len == 0)
        return (false);
    for (int i = 0; i < len; i++)

        if (str[i] == '.')
            cnt++;
    if (cnt > 1)
        return false;
    return true;
}
int main()
{
    char str[100];
    const int mx = 100;
    int index = 0;
    cout << "Enter @ to terminate user input" << endl;
// cin.get(str, mx, '@');
    while (index < mx - 1 &&
            (str[index++] = cin.get()) != '@')
        ;
    int start = 0, end = 0;
    int len = strlen(str);
    bool flag = 0, flag1 = 0;
    while (end <= len && start <= end)
    {
        if (!Form_Token(str[end]))
            end++;
        else if (Form_Token(str[end]) && start == end)
        {
            if (is_A_Operator(str[end]))
                printf("'%c' IS AN ARETHMETIC OPERATOR\n", str[end]);

            if (is_R_Operator(str[end]))
                printf("'%c' IS RELATIONAL OPERATOR\n", str[end]);
            else if (separator(str[end]))
                printf("'%c' IS A SEPARATOR\n", str[end]);
            end++;
            start = end;
        }
        else if (Form_Token(str[end]) && start != end || (end == len && start != end))
        {
            char *subStr = subString(str, start, end - 1);
            if (isKeyword(subStr))
                printf("'%s' IS A KEYWORD\n", subStr);
            else if (!token(subStr))
                printf("'%s' IS NOT A VALID Token\n", subStr);
            else if (isInteger(subStr))
                printf("'%s' IS AN INTEGER\n", subStr);
            else if (Float_num(subStr))
                printf("'%s' IS A FLOAT NUMBER\n", subStr);
            else if (validIdentifier(subStr))
                printf("'%s' IS A VALID IDENTIFIER\n", subStr);
            else if (!validIdentifier(subStr))
                printf("'%s' IS NOT A VALID IDENTIFIER\n", subStr);
            start = end;
        }
    }
    return 0;
}
