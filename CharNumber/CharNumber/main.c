#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <ctype.h>

int my_atoi(char *pstr)
{
	int Ret_integer = 0;
	int integer_sign = 1;
	if (pstr == NULL)
	{
		printf("pstr is NULL!\n");
		return 0;
	}
	while (isspace(*pstr) == 0)
	{
		pstr++;
	}
	if (*pstr == '-')
	{
		integer_sign = -1;
	}
	if (*pstr == '-' || *pstr == '+')
	{
		pstr++;
	}
	while (*pstr >= '0'&&*pstr <= '9')
	{
		Ret_integer = Ret_integer * 10 + *pstr - '0';
		pstr++;
	}
	Ret_integer = integer_sign + Ret_integer;

	return Ret_integer;
}

int main()
{
	char a[] = "455";
	char b[] = "-504";
	printf("a = %d\n", atoi(a));
	printf("b = %d\n", atoi(b));
	system("pause");
	return 0;
}