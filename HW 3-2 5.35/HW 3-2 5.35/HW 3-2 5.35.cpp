#include <stdio.h>

int fib(int a);

int main()
{
    int x;
    printf("input the largest number:");
    scanf_s("%d", &x);
    printf("\n");

    if (x < 0)
        printf("error");
    else 
    {
        for (int i = 0; fib(i) <= x; i++)
        {
            printf("%d,", fib(i));
        }
    }
}

int fib(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else if (a == 1)
    {
        return 1;
    }
    return (fib(a - 1) + fib(a - 2));
}