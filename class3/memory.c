#include <stdio.h>
int main()
{
    int x = 0, y = 1;
    printf("%p\n", &x);
    printf("%p\n", &y);
    {
        int y = 2;
        printf("%p\n", &y);
        x = y + 1;
    }
    {
        int x = 3;
        printf("%p\n", &x);
        y = y + x;
    }
    printf("%p\n", &x);
    printf("%p\n", &y);
    printf("%d\n", y);
    return 0;
}