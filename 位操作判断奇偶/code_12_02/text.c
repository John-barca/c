#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void judge(int i)
{
	int ret;
	ret = i & 1;
	if (ret == 1)
	{
		printf("这个数为奇数\n");
	}
	else if (ret == 0)
	{
		printf("这个数为偶数\n");
	}
}

int main()
{
	int i = 0;
	printf("请输入一个数：");
	scanf("%d", &i);
	judge(i);
	system("pause");
	return 0;
}