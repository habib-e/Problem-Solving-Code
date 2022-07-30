#include<stdio.h>
void check_vowel(char a)
{
    if (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
        printf("%c is a vowel.\n", a);
    else if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        printf("%c is a vowel.\n", a);
    else
        printf("%c is a consonant.\n", a);
}
int main()
{
    char ch;
    printf("Input a character\n");
    scanf("%c", &ch);
    check_vowel(ch);
    return 0;
}
