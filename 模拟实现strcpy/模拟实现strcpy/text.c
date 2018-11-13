/*Ä£ÄâÊµÏÖstrcpy*/
#include <stdio.h>
#include <Windows.h>
#include <assert.h>
char* My_strcpy(char *dest, char *p)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(p != NULL);
	while (*dest++ = *p++)
	{
		;
	}
	return ret;
}
int main()
{
	char str1[] = "abcdefg";
	char str2[10];
	printf("%s\n", My_strcpy(str2, str1));
	system("pause");
	return 0;
}