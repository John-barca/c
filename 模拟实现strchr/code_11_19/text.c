/*Ä£ÄâÊµÏÖstrchr*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *My_strchr(const char *string, char c)
{
	assert(string);
	while (*string != NULL)
	{
		if (*string == c)
		{
			return string;
		}
		else
		{
			string++;
		}
	}
	return NULL;
}
int main()
{
	char str[] = "abcdefghig";
	char p = 'e';
	char *ret = My_strchr(str, p);
	printf("%s\n", ret);
	system("pause");
	return 0;
}