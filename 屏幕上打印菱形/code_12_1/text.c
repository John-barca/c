#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void pr_start(int _num)
{
	int n = 0;
	int i = 0;
	for (n = 1; n <= 2 * _num; n++)
	{
		int temp = n;
		if (n > _num)
		{
			temp -= 2 * (n - _num);
		}
		for (i = 1; i < 2 * _num; i++)
		{
			if ((i >= (_num - temp + 1)) && (i <= (temp + _num - 1)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
int main()
{
	int num = 0;
	printf("Please enter a number£º");
	scanf("%d", &num);
	pr_start(num);
	system("pause");
	return 0;
}