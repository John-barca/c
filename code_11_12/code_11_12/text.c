/*����ˮ��1ƿ��ˮ1Ԫ��
2����ƿ���Ի�һƿ��ˮ�� 
��20Ԫ�����Զ�����ˮ�� 
���ʵ�� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Buywater(int num)
{
	int n = 1, s;//n:����»��ģ�s����һ�λ�����ʣ���
	int sum = num;
	while (n != 0)
	{
		n = num / 2;
		s = num % 2;
		num = n + s;
		sum = sum + n;
	}
	return sum;
}
int main()
{
	int money = 20;
	int num = 0;
	num = Buywater(money);
	printf("������%dƿ��ˮ\n", num);
	system("pause");
	return 0;
}
