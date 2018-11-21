/*Ä£ÄâÊµÏÖmemmove*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 

void* My_memmove(void* dst, const void* src, int num)
{
	assert(dst != NULL);
	assert(src != NULL);
	void* ret = dst;
	if (dst < src)
	{
		while (num--)
		{
			*(char*)dst = *(char*)src;
			++(char*)dst;
			++(char*)src;
		}
	}
	else
	{
		*((char*)dst + num) = *((char*)src + num);
		++(char*)dst;
		++(char*)src;
	}
	return ret;
}
int main()
{
	char str1[] = "abcdefgh";
	My_memmove(str1, str1 + 4, 4 * sizeof(char));
	printf("%s\n", str1);
	system("pause");
	return 0;
}