#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int ch, i = 0;
	ch = getchar();
	if (ch == '}')
	{
		printf("unmatched");
	}
	while (ch != EOF)
	{
		if (ch == '{')
		{
			i++;
		}
		if (ch == '}')
		{
			i--;
		}
		ch = getchar();
	}
	{
		if (i == 0)
		{
			printf("matched");
		}
		else
		{
			printf("unmatched");
		}
	}
	system("pause");
	return 0;
}