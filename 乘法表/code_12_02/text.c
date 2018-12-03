#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
void chengfa(int m)
{
	int i = 1, j = 1;
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d\t", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int m = 0;
	printf("请输入行列数：\n");
	scanf("%d", &m);
	chengfa(m);
	system("pause");
	return 0;
}