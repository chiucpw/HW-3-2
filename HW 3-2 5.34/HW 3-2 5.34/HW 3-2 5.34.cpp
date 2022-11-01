#include <stdio.h>
#include <math.h>
int power(int b, int e);

int main()
{
	int x, y;
	printf("input base:");
	scanf_s("%d", &x);
	printf("input exponent:");
	scanf_s("%d", &y);
	printf("%d", power(x, y));
}

int power(int b, int e)
{
	int ans;
	ans = pow(b, e);
	return ans;
}