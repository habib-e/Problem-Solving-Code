#include<stdio.h>
int large(int a, int b, int c)
{
    if(a>=b && a>=c) return a;
    else if(b>=a && b>=c) return b;
    else return c;
}
int main()
{
    int number1, number2, number3, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);
    largest = large(number1, number2, number3);
    printf("%d",largest);
    return 0;
}
