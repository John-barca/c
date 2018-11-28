#include <stdio.h>
#include <Windows.h>
#include <assert.h>
#pragma warning(disable:4996)

/*模拟实现strncat*/

char* my_strncat(char* dst, char* src, int num)
{
	assert(dst);
	assert(src);
	char* ret = dst;
	while (*dst)
	{
		dst++;
	}
	while (num--)
	{
		if (*src)
		{
			*dst++ = *src++;
		}
	}
	*dst = '\0';
	return ret;
}

int main()
{
	char str1[30] = "asdfghj";
	char str2[] = "qwerty789";
	int sz = 0;
	printf("请输入字符数:");
	scanf("%d", &sz);
	printf("%s\n", my_strncat(str1, str2, sz));
	system("pause");
	return 0;
}
