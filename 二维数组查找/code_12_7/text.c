#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void find(int arr[3][3], int* px, int* py, int key)
{
	int row = 0;
	int col = *py - 1;
	while ((col >= 0) && (col < *py))
	{
		if (arr[row][col] == key)
		{
			*px = row;
			*py = col;
			return;
		}
		else if (arr[row][col] < key)
		{
			row++;
		}
		else
		{
			col--;
		}
	}
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int key = 0;
	scanf("%d", &key);
	int x = 3, y = 3;
	find(arr, &x, &y, key);
	printf("x=%d,y=%d\n", x, y);
	system("pause");
	return 0;
}