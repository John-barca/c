#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Find_arr(int *p, int sz)
{
	int i = 0;
	int ret = 0;//��¼����ֵ���Ľ��
	int pos = 0;//��¼ret�����Ƶ�һ��Ϊ1��λ��
	int x = 0;
	int y = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= p[i];
	}
	for (i = 0; i < 32; i++)
	{
		if (1 == ((ret >> i) & 1))
		{
			pos = i;
			break;
		}
	}//�ҵ�ret������Ϊ��һ��Ϊ1��λ��
	for (i = 0; i < sz; i++)
	{
		if (1 == ((p[i] >> pos) & 1))
		{
			x ^= p[i];
		}
		else
		{
			y ^= p[i];
		}
	}
	printf("x=%d,y=%d\n", x, y);
}
int main()
{
	int arr[] = { 1,2,3,1,2,3,4,5,6,4,5,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Find_arr(arr, sz);
	system("pause");
	return 0;
}
/*1.һ��������ֻ�����������ǳ���һ�Σ� 
�����������ֶ����������Ρ�
�ҳ����������֣����ʵ�֡�*/