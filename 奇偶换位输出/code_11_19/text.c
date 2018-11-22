#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}
void swap(int arr[], int sz)
{
	int i = 0, j = 0;
	for (i = 0; i < sz; i++)
	{
		if ((arr[i] % 2) == 0)
		{
			for (j = i + 1; j < sz; j++)
			{
				int tmp = 0;
				if ((arr[j] % 2) == 1)
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
					break;
				}
			}
		}
	}
}
int main()
{
	int arr[] = { 2,4,6,8,10,1,3,5,7,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	swap(arr, sz);
	print(arr, sz);
	system("pause");
	return 0;
}