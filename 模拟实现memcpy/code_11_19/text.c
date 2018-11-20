#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/*Ä£ÄâÊµÏÖmemcpy*/
void *My_memcpy(void *dst, const void* src, int num)
{
	void* ret = dst;
	while (num)
	{
		*(char*)dst = *(char*)src;
		dst = (char*)dst+ 1;
		src = (char*)src+ 1;
		num--;
	}
	return ret;
}
int main()
{
	char str1[] = "abcdefg";
	char str2[20];
	int len = sizeof(str1);
	printf("%s", My_memcpy(str2, str1,len));
	system("pause");
	return 0;
}
