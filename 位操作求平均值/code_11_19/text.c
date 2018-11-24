#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int my_pingjun(int a, int b)
{
	int sum = 0;
	sum = (a&b) + ((a^b) >> 1);
	return sum;
}
int main()
{
	int a = 0, b = 0;
	printf("请输入两个数:");
	scanf("%d%d", &a, &b);
	int ret = my_pingjun(a, b);
	printf("%d\n", ret);
	system("pause");
	return 0;
}