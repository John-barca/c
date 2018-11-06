#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void left_move(char arr[], int n)
//{
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < n; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int n = 0;
//	printf("ÇëÊäÈë×óÐý×Ö·ûÊý:");
//	scanf("%d", &n);
//	left_move(arr, n);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
int my_judge(char str1[],char str2[])
{
	int i = 0;
	int j = 0;
	int len = strlen(str1);
	for (j = 1; j <= len; j++)
	{
		{
			int tmp = str1[0];
			for (i = 0; i < len - 1; i++)
			{
				str1[i] = str1[i + 1];
			}
			str1[len - 1] = tmp;
		}
		if (0 == strcmp(str1, str2))
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", my_judge(s1, s2));
	system("pause");
	return 0;
}