#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void my_print(int num)
{
	int count = 0;
	int a[32] = { 0 };
	int i = 0;
	while (num)
	{
		a[i++] = num % 2;
		num = num / 2;
		count++;
	}
	printf("��������:");
	for (i = count; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("ż������:");
	for (i = count - 1; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
int main()
{
	int num = 0;
	printf("������һ����:\n");
	scanf("%d", &num);
	my_print(num);
	system("pause");
	return 0;
}