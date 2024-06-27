#include <stdio.h>

int star(int lines)
{
    for (int i = 1; i <= lines; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}

int rev_star(int lines)
{
    for (int i = 1; i <= lines; i++)
    {
        for (int j = lines; j >= i; j--)
        {
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}

int pyramid(int l)
{
    for (int i = 1; i <= l; i++)
    {
        for (int j = 0; j < (l - i); j++)
        {
            printf("   ");
        }

        for (int k = 0; k < (2 * i - 1); k++)
        {
            printf(" # ");
        }

        for (int j = 0; j < (l - i); j++)
        {
            printf("   ");
        }

        printf("\n");
    }
    return 0;
}

int rev_pyramid(int l)
{
    for (int i = l; i >=0; i--)
    {
        for (int j = 0; j < (l - i); j++)
        {
            printf("   ");
        }

        for (int k = 0; k < (2 * i - 1); k++)
        {
            printf(" # ");
        }

        for (int j = 0; j < (l - i); j++)
        {
            printf("   ");
        }

        printf("\n");
    }
    return 0;
}

int main()
{
    int input, lines;
    printf("ENTER AS FOLOWS:\n 0 for Triangular star pattern\n 1 for Reversed triangular star pattern\n 2 for pyramidal pattern\n 3 for reversed pyramidal pattern\n");
    label:
    scanf("%d", &input);

    if (input == 0)
    {
        printf("Enter no. of lines\n");
        scanf("%d", &lines);
        star(lines);
    }

    else if (input == 1)
    {
        printf("Enter no. of lines\n");
        scanf("%d", &lines);
        rev_star(lines);
    }

    else if (input == 2)
    {
        printf("Enter no. of lines\n");
        scanf("%d", &lines);
        pyramid(lines);
    }
    else if (input == 3)
    {
        printf("Enter no. of lines\n");
        scanf("%d", &lines);
        rev_pyramid(lines);
    }
    else
    {
        printf("Choose a Valid Option from Above!\n");
        goto label;
    }
    

    return 0;
}