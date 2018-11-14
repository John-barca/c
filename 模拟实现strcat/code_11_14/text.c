/*Ä£ÄâÊµÏÖstrcat*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <assert.h>
char* My_strcat(char *dest, char *p)
{
	assert(dest);
	assert(p);
	char *ret = dest;
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *p++)
	{
		;
	}
	return ret;
}
int main()
{
	char str1[20] = "Hello ";
	char str2[] = "windows!";
	char *ret = My_strcat(str1, str2);
	printf("%s\n", ret);
	system("pause");
	return 0;
}