#include <bits/stdc++.h>
using namespace std;
char *removeDuplicate(char str[],int n)
{
    set<char>s(str,str+n-1);
    int i=0;
    for(auto x: s)
       str[i++]=x;
    str[i]='\0';
    return str;
}
void sort_string(char *s)
{
   int c,d=0,length;
   char *pointer,*result,ch;
   length=strlen(s);
   result=(char*)malloc(length+1);
   pointer=s;
   for(ch='0';ch<='z';ch++)
   {
      for(c=0;c<length;c++ )
      {
         if(*pointer==ch )
         {
            *(result+d)=*pointer;
            d++;
         }
         pointer++;
      }
      pointer=s;
   }
   *(result+d)='\0';
   strcpy(s,result);
   free(result);
}
int main()
{
   char str[]= "0cboaPPc0dcobc0";
   int n=sizeof(str)/sizeof(str[0]);
   removeDuplicate(str,n);
   sort_string(str);
   printf("%s\n",str);
   return 0;
}
