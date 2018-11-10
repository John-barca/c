#include <stdio.h>
#include <stdlib.h>

int binary_search(int arr[], int key, int left, int right)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (key > arr[mid])
		{
			left = mid + 1;
		}
		else if (key < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;

	int ret = binary_search(arr, key, left, right);
	if (ret == -1)
		printf("�Ҳ���\n");
	else
		printf("�ҵ���:%d\n", ret);


	//int mid = (left+right)/2;

	system("pause");
	return 0;
}