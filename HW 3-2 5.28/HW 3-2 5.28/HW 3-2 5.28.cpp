#include <stdio.h>

char change(char a);

int main()
{
	char x;
	printf("input an alphabet:");
	scanf_s("%c", &x);
	printf("%c", change(x));
}

char change(char a)
{
	char b;
	if ((int)a>96)
	{
		b = a - 32;
		return b;
	}
	else
	{
		b = a + 32;
		return b;
	}
}