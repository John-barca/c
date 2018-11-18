#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*Ä£ÄâÊµÏÖstrstr*/
char* My_strstr(const char* dst,const char* src)
{
	assert(dst);
	assert(src);
	char* start = (char*)dst;
	char* s_src = (char*)src;
	char* tmp = (char*)dst;
	while (*tmp)
	{
		start = tmp;
		while (*start != '\0'&&*s_src != '\0'&&*start == *s_src)
		{
			start++;
			s_src++;
		}
		if (*s_src == '\0')
		{
			return tmp;
		}
		s_src = (char *)src;
		tmp++;
	}
}
int main()
{
	char str1[] = "abcdefg";
	char str2[] = "cde";
	printf("%s\n", My_strstr(str1, str2));
	system("pause");
	return 0;
}