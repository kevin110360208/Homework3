#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int Fabonacci(unsigned int n);

int main()
{
	unsigned int n;
	printf("Please enter n:");
	scanf_s("%u", &n);
	printf("%uth is:%u\n", n, Fabonacci(n));
	printf("The largest is:%llu", Fabonacci(UINT_MAX));
	system("pause");
	return 0;
}

unsigned long long int Fabonacci(unsigned int n)
{
	unsigned int i;
	unsigned long long int ans[20000];
	ans[0] = 0, ans[1] = 1;
	for (i = 2; i <= n; i++)
	{
		ans[i] = ans[i - 1] + ans[i - 2];
		if (ans[i] < ans[i - 1])
		{
			break;
		}
	}
	return ans[n-1];
}