#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int LCM(int x,int y);

int main(void)
{
	int a, b, Ans;
	printf("Please enter two integer:");
	scanf_s("%d%d", &a, &b);
	Ans = LCM(a,b);
	printf("Least common multiple is %d\n", Ans);
	system("pause");
	return 0;
}

int LCM(int x,int y)
{
	int small = 1;
	do
	{
		if (small % x == 0 && small % y == 0)
		{
			return small;
		}
		else
		{
			small++;
		}
	} while (true);

}