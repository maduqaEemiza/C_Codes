#include <stdio.h>
#include <string.h>

int parser(char *str)
{
    int i = 0;
    while (str[i] != ' ')
    {
        i++;
    }

    int j = 0;
    while (str[strlen(str) - j - 1] != ' ')
    {
        j++;
    }

    for (int k = i + 1; k < (strlen(str) - j); k++)
    {
        printf("%c", str[k]);
    };
}

int main()
{
    char str[] = "<h2> Notes </h2>";

    parser(str);

    return 0;
}