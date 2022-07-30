#include<bits/stdc++.h>
using namespace std;
bool isDelimiter(char ch)
{
	if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||
		ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
		ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
		ch == '[' || ch == ']' || ch == '{' || ch == '}')
		return (true);
	return (false);
}
bool Checker(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' || ch=='\n'||
		ch == '/' || ch == ',' || ch == ';' || ch == '>' ||
		ch == '<' || ch == '=' || ch == '(' || ch == ')' ||
		ch == '[' || ch == ']' || ch == '{' || ch == '}')
		return (true);
	return (false);
}

bool isSeperator(char ch)
{
    if (ch == '{' || ch == '}' || ch == '('|| ch == ',' || ch == ';'||ch==')' )
		return (true);
	return (false);
}

bool isOperator(char ch)
{
	if (ch == '+' || ch == '-' || ch == '*' ||
		ch == '/' || ch == '>' || ch == '<' ||
		ch == '=')
		return (true);
	return (false);
}


bool validIdentifier(char* str)
{
	if (str[0] == '0' || str[0] == '1' || str[0] == '2' ||
		str[0] == '3' || str[0] == '4' || str[0] == '5' ||
		str[0] == '6' || str[0] == '7' || str[0] == '8' ||
		str[0] == '9' || isDelimiter(str[0]) == true)
		return (false);
	return (true);
}


bool isKeyword(char* str)
{
	if (!strcmp(str, "if") || !strcmp(str, "else") ||
		!strcmp(str, "while") || !strcmp(str, "do") ||
		!strcmp(str, "break") ||
		!strcmp(str, "continue") || !strcmp(str, "int")
		|| !strcmp(str, "double") || !strcmp(str, "float")
		|| !strcmp(str, "return") || !strcmp(str, "char")
		|| !strcmp(str, "case") || !strcmp(str, "char")
		|| !strcmp(str, "sizeof") || !strcmp(str, "long")
		|| !strcmp(str, "short") || !strcmp(str, "typedef")
		|| !strcmp(str, "switch") || !strcmp(str, "unsigned")
		|| !strcmp(str, "void") || !strcmp(str, "static")
		|| !strcmp(str, "struct") || !strcmp(str, "goto"))
		return (true);
	return (false);
}

bool isInteger(char* str)
{
	int i, len = strlen(str);

	if (len == 0)
		return (false);
	for (i = 0; i < len; i++) {
		if (str[i] != '0' && str[i] != '1' && str[i] != '2'
			&& str[i] != '3' && str[i] != '4' && str[i] != '5'
			&& str[i] != '6' && str[i] != '7' && str[i] != '8'
			&& str[i] != '9' || (str[i] == '-' && i > 0))
			return (false);
	}
	return (true);
}


bool isRealNumber(char* str)
{
	int i, len = strlen(str);
	bool hasDecimal = false;

	if (len == 0)
		return (false);
	for (i = 0; i < len; i++) {
		if (str[i] != '0' && str[i] != '1' && str[i] != '2'
			&& str[i] != '3' && str[i] != '4' && str[i] != '5'
			&& str[i] != '6' && str[i] != '7' && str[i] != '8'
			&& str[i] != '9' && str[i] != '.' ||
			(str[i] == '-' && i > 0))
			return (false);
		if (str[i] == '.')
			hasDecimal = true;
	}
	return (hasDecimal);
}

char* subString(char* str, int start, int end)
{
	int i;
	char* subStr = (char*)malloc(
				sizeof(char) * (end - start + 2));

	for (i = start; i <= end; i++)
		subStr[i - start] = str[i];
	subStr[end - start + 1] = '\0';
	return (subStr);
}


void parse(char* str)
{
	int start = 0, end = 0;
	int len = strlen(str);

	while (end <= len && start <= end) {
		if (isDelimiter(str[end]) == false)
        {
           end++;

        }


		if (isDelimiter(str[end]) == true && start == end) {
		    if(isSeperator(str[end])==true)
		    printf("%c is an seperator\n",str[end]);

			if (isOperator(str[end]) == true)
				printf("%c IS AN OPERATOR\n", str[end]);
			end++;
			start = end;
		} else if (isDelimiter(str[end]) == true && start != end
				|| (end == len && start != end)) {

			char* subStr = subString(str, start, end - 1);

			if (isKeyword(subStr) == true )
				printf("%s IS A KEYWORD\n", subStr);

			else if (isInteger(subStr) == true )
				printf("%s IS AN number\n", subStr);

			else if (isRealNumber(subStr) == true)
				printf("%s IS A floating point number\n", subStr);

			else if (validIdentifier(subStr) == true
					&& isDelimiter(str[end - 1]) == false && isDelimiter(str[end+2])==false)
				printf("%s IS An IDENTIFIER\n", subStr);

			else if (validIdentifier(subStr) == false
					&& isDelimiter(str[end - 1]) == false)
				printf("%s IS NOT An IDENTIFIER\n", subStr);
			start = end;
		}
	}
	return;
}


int main()
{


	char str[100] ;

	printf ("Type the line of code below: \n");
    const int mx = 100;
    cin.get(str, mx, '~');

	parse(str);

	return (0);
}
