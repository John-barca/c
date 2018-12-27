#include <stdio.h>
#include <stdlib.h>

void bubblesort(int array[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz-1 ; i++)
	{
		for (j = 0; j < sz - 1 - i; j++)
		{
			int tmp = 0;
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = array[j];
			}
		}
	}
}

int main()
{
	int array[] = { 9,8,5,6,1,7,3,4 };
	int len = sizeof(array) / sizeof(array[0]);
	bubblesort(array, len);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d\t", array[i]);
	}
	system("pause");
	return 0;
}