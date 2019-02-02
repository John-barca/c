#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				printf("%c%c", 0xa8, 0x80);
			}
			else
				printf("  ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}