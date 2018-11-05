//#include <stdio.h>
//int main()
//{
//	int a = 2, b = 3;
//	int c = 0;
//	printf("a=%d,b=%d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d\n", a, b);
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 2, b = 3;
//	printf("a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d,b=%d\n", a, b);
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//		int max = a[0];
//		for (i = 1; i < 10; i++)
//		{
//			if (max < a[i])
//			{
//				max = a[i];
//			}
//			else
//				continue;
//		}
//	}
//	printf("max=%d\n", max);
//	getchar();
//	return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 1, b = 2, c = 3;
//	int z = 0;
//	printf("%d %d %d\n", a, b, c);
//	if (a < b)
//	{
//		z = a;
//		a = b;
//		b = z;
//	}
//	if (a < c)
//	{
//		z = a;
//		a = c;
//		c = z;
//	}
//	if (b < c)
//	{
//		z = b;
//		b = c;
//		c = z;
//	}
//	printf("%d %d %d\n", a, b, c);
//	getchar();
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	while (1)
	{
		printf("请输入两个数字\n");
		scanf("%d%d", &a, &b);
		c = a % b;
		if (c != 0)
		{
			a = b;
			b = c;
			c = a % b;
		}
		printf("最大公约数为%d\n", b);
		system("pause");
		getchar();
		return 0;
	}
}