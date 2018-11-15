#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <assert.h>
char* My_strncpy(char *dest, char *p, int n)
{
	char *ret = dest;
	assert(dest);
	assert(p);
	while (n--)
	{
		*dest++ = *p++;
	}
	return ret;
}
int main()
{
	char str1[] = "123456789";
	char str2[] = "abcdef";
	int sz = 0;
	printf("ÇëÊäÈë¿½±´×Ö·ûÊı£º\n");
	scanf("%d", &sz);
	printf("%s\n", My_strncpy(str1, str2, sz));
	system("pause");
	return 0;
}