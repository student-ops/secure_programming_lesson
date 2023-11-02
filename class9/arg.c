#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    argv[0][0] = 'h';
    argv[0][1] = 'o';
    argv[0][2] = 'g';
    argv[0][3] = 'e';
    argv[0][4] = 'h';
    argv[0][5] = 'o';
    argv[0][6] = 'g';
    argv[0][7] = 'e';
    argv[0][8] = 'e';
    for (int j = 9; j < 500; j++)
    {
        argv[0][j] = 'm';
    }
    scanf("%d", &i);
    printf("%s\n", argv[0]);
    return 0;
}