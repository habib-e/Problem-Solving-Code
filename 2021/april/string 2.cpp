#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    printf("input: ");
    int space=0,zero=0,one=0;
    scanf("%[^'\n']s",str);
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == ' ')
            space++;
        else if(str[i]=='0'){
            zero++;
        }
        else if(str[i]=='1')
        {
            one++;
        }
    }
    printf("spaces = %d zeros = %d ones = %d\n",space,zero,one);
    return 0;
}
