#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long long int power(int base, int exponent);

int main()
{
	int a, b;
	long long int ans;
	printf("Please enter base and exponent:");
	scanf_s("%d %d", &a, &b);
	ans = power(a, b);
	printf("%d to the %d power is:%d", a, b, ans);
	system("pause");
	return 0;
}

long long int power(int base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}
	else
	{
		return base * power(base, exponent - 1);
	}
}