#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void judge(int i)
{
	int ret;
	ret = i & 1;
	if (ret == 1)
	{
		printf("�����Ϊ����\n");
	}
	else if (ret == 0)
	{
		printf("�����Ϊż��\n");
	}
}

int main()
{
	int i = 0;
	printf("������һ������");
	scanf("%d", &i);
	judge(i);
	system("pause");
	return 0;
}