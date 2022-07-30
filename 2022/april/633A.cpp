#include <stdio.h>
#include <string.h>
int main()
{
    char x[100100];
    int cnt = 0;
    int len = 0;
    scanf("%s", x);
    while((len = strlen(x)) > 1)
    {
        int tmp = 0;
        for(int i = 0; i < len; i++)
            tmp += x[i] - '0';
        sprintf(x, "%d", tmp);
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}