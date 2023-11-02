#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *x;
    x = getenv("x");
    int i;
    if (x == NULL)
    {
        printf("x is undefined\n");
    }
    else
    {
        for (i = -2; i < 100; i++)
        {
            printf("%c\n", x[i]);
        }
        printf("%s\n", x);
    }
    return 0;
}