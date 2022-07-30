#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
char input[100],stack[100];
char row,column;
int j,i,k;
bool isupper(char x)
{
    if(x>='A' and x<='Z') return true;
    else return false;
}
int main()
{
    char table[5][5][10]= { {"NT", "a", "b", "c", "$"},
                            {"S", "!", "S=AB", "!", "!"},
                            {"A", "!", "A=bD", "!", "!"},
                            {"D", "D=aD", "!", "D=#", "!"},
                            {"B", "!", "!", "B=c", "!"}};
    gets(input);
    int in_ptr=0;
    int st_ptr=1;
    stack[0]='$';
    stack[1]=table[1][0][0];
    char in=input[in_ptr];
    char st=stack[st_ptr];
    char rule[10];
    if(isupper(st))
    {
        for(i=0; i<5; i++)
        {
            if(in == table[0][i][0])
            {
                column=i;
                break;
            }
        }
        for( j=0; j<5; j++)
        {
            if(st == table[j][0][0])
            {
                row=j;
                if(table[row][column][0]!='!')
                {
                    strcpy(rule,table[row][column]) ;
                }
                else
                {
                    printf("Error Occurred. There is no such table entry.\n");
                    break;
                }
            }
        }
    }
    st_ptr--;
    if(rule[2]!='#')
    {
        printf("Stack\t\t\t\tInput\n");
        for( j=strlen(input)-1; j>=2; j--)
        {
            st_ptr++;
            stack[st_ptr] =rule[j];
            printf("$%c\t\t\t\t%s\n",stack[st_ptr],input);

        }
    }
}
