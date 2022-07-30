#include<bits/stdc++.h>
using namespace std;
bool isupper(char x)
{
    if(x>='A' and x<='Z') return true;
    else return false;
}
int main()
{
    char table[5][5][10] = {{"NT","a","b","c","$"},
        {"S","!", "S=AB","!","!"},
        {"A","!", "A=bD","!","!"},
        {"D","D=aD","!","D=#","!"},
        {"B","!", "!","B=c","!"}
    };
    char input[100];
    cin>>input;
    int len = strlen(input);
    char stack[100];
    int in_ptr=0;
    int st_ptr=1;
    int row,column;

    stack[0]='$';
    stack[1]=table[1][0][0];

    char in = input[in_ptr];
    char st = stack[st_ptr];
    char rule[10];
    if(isupper(st))
    {
        for(int i=0; i<5; i++)
        {
            if(in==table[0][i][0])
            {
                column = i;
                break;
            }
        }
        for(int j=0; j<5; j++)
        {
            if(st==table[j][0][0])
            {
                row = j;
                if(table[row][column][0]!='!')
                {
                    strcpy(rule,table[row][column]);
                }
                else
                {
                    cout<<"Parsing not possible"<<"\n";
                    return 0;
                }
                for(int k=0; k<=strlen(stack); k++)
                    printf(" %c",stack[k]);

                printf("       ");

                for(int k=0; k<=strlen(input); k++)
                    printf("%c",input[k]);

                printf("\n");
            }

        }
        st_ptr--;
        if(rule[2]!='#')
        {
            for(int j=len-1; j>=2; j--)
            {
                st_ptr++;
                stack[st_ptr] = rule[j];
            }
        }


    }
    return 0;
}
