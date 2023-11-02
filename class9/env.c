#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *x;
    x = getenv("x");
    if (x == NULL)
    {
        printf("x is undefined\n");
    }
    else
    {
        printf("%s\n", x);
    }
    return 0;
}