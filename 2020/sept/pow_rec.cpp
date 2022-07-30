#include <stdio.h>
int power_rec(int base, int a)
{
    if (a==0) return 1;
    return (base * powerrec(base, a - 1));
}
int main()
{
    int base,power,ans;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number: ");
    scanf("%d", &power);
    ans = power_rec(base,power);
    printf("%d^%d = %d", base, power, ans);
    return 0;
}

