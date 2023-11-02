#include <stdio.h>

char *file_names[] = {"file1.txt", "file2.txt", "file3.txt"};
int file_index = 0;
FILE *f;

FILE *get_next_file()
{
    if (file_index == 3)
        return NULL;
    f = fopen(file_names[file_index++], "r");
    return f;
}

int main()
{
    int c;

    for (int i = 0; i < 3; i++)
    {
        c = fgetc(get_next_file());
        if (c != EOF)
        {
            printf("%s: \n %c\n", file_names[file_index - 1], c);
        }
        fclose(f);
    }

    return 0;
}
