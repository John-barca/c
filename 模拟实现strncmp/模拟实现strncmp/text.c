/*模拟实现strncmp*/

#include <stdio.h>
#include <Windows.h>
#include <assert.h>
#pragma warning(disable:4996)

int my_strncmp(const char* dst, const char *src, int num)
{
	assert(dst);
	assert(src);
	while (*dst&&*src&&*dst == *src&&num--)
	{
		;
	}
	if (*dst < *src)
	{
		return -1;
	}
	else if (*dst > *src)
	{
		return 1;
	}
	else {
		return 0;
	}

}

int main()
{
	char str1[] = "zyx";
	char str2[] = "zyxf789";
	int sz = 0;
	printf("请输入比较字符数：");
	scanf("%d", &sz);
	int ret = my_strncmp(str1, str2, sz);
	printf("%d\n", ret);
	system("pause");
	return 0;
}