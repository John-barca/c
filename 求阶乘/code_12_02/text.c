#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int fac1(int n)
{
	int sum = 1;
	for (; n > 0; n--)
	{
		sum = sum * n;
	}
	return sum;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac1(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}