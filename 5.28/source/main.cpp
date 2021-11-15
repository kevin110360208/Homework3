#include <stdio.h>
#include <stdlib.h>

char alphabet(char x);

int main(void)
{
	char a;
	char ex;
	printf("Please enter a alphabet:");
	scanf_s("%c", &a);
	ex = alphabet(a);
	if (ex != 0)
	{
		printf("After conversion is %c\n", ex);
	}
	else
	{
		printf("Not a alphabet\n");
	}
	system("pause");
	return 0;
}
char alphabet(char x)
{
	if (x >= 'a'&&x <= 'z')
	{
		x = x - 32 ;
	}
	else if(x >= 'A'&&x <= 'Z')
	{
		x = x + 32;
	}
	else
	{
		x = 0;
	}
	return x;
}