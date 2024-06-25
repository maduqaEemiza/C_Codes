#include <stdio.h>
//slower than ierative, atleast for huge numbers



int fibo(int input)
{
    if (input == 0 || input == 1)
    {
        return 1;
    }
    else
    {
        return fibo(input - 1) + fibo(input - 2);
    }
}

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("%d",fibo(num));

    return 0;
}