#include <stdio.h>

void h(int n, char A, char B, char C) 
{
    if (n == 1)
    {
        printf("move sheet from %c to %c\n", A, C);
    }
    else 
    {
        h(n - 1, A, C, B);
        h(1, A, B, C);
        h(n - 1, B, A, C);
    }
}

int main()
{
    int n;
    printf("input quantity:");
    scanf_s("%d", &n);
    h(n, 'A', 'B', 'C');
}
