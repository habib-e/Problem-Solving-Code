#include<stdio.h>
int main() {
    int a=10;
    int *p;
    char *ch;
    ch=&a;
    *ch=435;
    printf("%d",a);
    return 0;
}
