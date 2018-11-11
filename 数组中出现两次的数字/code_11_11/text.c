#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Find_arr(int *p, int sz)
{
	int i = 0;
	int ret = 0;//记录所有值异或的结果
	int pos = 0;//记录ret二进制第一个为1的位置
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
	}//找到ret二进制为第一个为1的位置
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
/*1.一个数组中只有两个数字是出现一次， 
其他所有数字都出现了两次。
找出这两个数字，编程实现。*/