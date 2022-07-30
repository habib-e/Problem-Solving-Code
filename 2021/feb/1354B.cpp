#include <stdio.h>
int main()
{
    int numbers[] = {2, 7, 3, 9, 15, 6};
    int size, cnt;
    size = sizeof(numbers) / sizeof(numbers[0]);
    printf("%d\n", size);
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] != 2 && numbers[i] < 10)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
