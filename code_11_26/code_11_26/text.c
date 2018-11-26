/*模拟实现通用qsort*/

#include<stdio.h>

int cmp(const void* n1, const void* n2)
{
	return *(char*)n1 - *(char*)n2;
}

void swap(char *buf1, char *buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void *base, int sz, int width, int(*cmp)(const void* n1, const void* n2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int ret = cmp((char*)base + j * width, (char*)base + (j + 1)*width);
			if (ret > 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

int main()
{
	int arr[] = { 5,4,8,6,2,1 };
	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp);
	int i = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	char arr1[] = { 'a','c','w','z','b' };
	bubble_sort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%c\t", arr1[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}