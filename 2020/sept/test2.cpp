#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    int i=0;
    int j;
    scanf("%d",&t);
    while(i<t)
    {
        int n;
        scanf("%d",&n);
        j= n*567;
        j/=9;
        j+=7492;
        j*=235;
        j/=47;
        j-=498;
        j/=10;
        j%=10;
        j=abs(j);
        if(n<0) n*=-1;
        printf("%d\n",j);
        i++;
    }
}
