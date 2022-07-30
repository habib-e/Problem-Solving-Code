#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<ll, ll> ml;
typedef map<string, ll> ms;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
char input[100], stackjoy[100];
char row, column;
int j, i, k;
int a, b;
int main()
{
   char table[5][5][10] = {{"!",  "a",     "b",     "c",     "$"},
                            {"S",   "!",     "S=AB",  "!",     "!"},
                            {"A",   "!",     "A=bD",  "!",     "!"},
                            {"D",   "D=aD",  "!",     "D=#",   "!"},
                            {"B",   "!",     "!",     "B=c",   "!"}};

    cin>>input;
    int in_ptr = 0;
    int st_ptr = 1;
    stackjoy[0] = '$';
    stackjoy[1] = table[1][0][0];
    printf("\nStack:\t\t\t\t\t\t\t\tInput:\n");
    while (st_ptr != -1)
    {
        char in = input[in_ptr];
        char st = stackjoy[st_ptr];
        char rule[10];
        for (a = 0; a <= st_ptr; a++)
        {
            printf("%c", stackjoy[a]);
        }
        printf("\t\t\t\t\t\t\t\t\t");
        b = in_ptr;
        while (input[b] != '\0')
        {
            printf("%c", input[b]);// print input//baac$
            b++;
        }
        printf("\n");
        if (isupper(st))
        {
            for (i = 0; i < 5; i++)
            {
                if (in == table[0][i][0])
                {
                    column = i;
                    break;
                }
            }
            for (j = 0; j < 5; j++)
            {
                if (st == table[j][0][0])
                {
                    row = j;
                    break;
                }
            }
            if (table[row][column][0] != '!')
            {
                strcpy(rule, table[row][column]);
            }
            else
            {
                printf("Error Occurred. There is no such table entry.\n");
                exit(0);
            }
            st_ptr--;
            int len = strlen(rule);
            if (rule[2] != '#')
            {
                for (j = len - 1; j >= 2; j--)// storing in reverse order
                {
                    st_ptr++;
                    stackjoy[st_ptr] = rule[j];

                }
            }
        }
        else
        {
            if (in == st)
            {
                st_ptr--;
                in_ptr++;
            }
            else
            {
                printf("Parsing no possible");
            }
        }
    }
    if (input[in_ptr] == '\0')
    {
        printf("Parsing successful.");
    }
    else
    {
        printf("Parsing not successful.");
    }
    return 0;
}
