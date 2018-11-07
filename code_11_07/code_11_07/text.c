#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int b[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", b[i]);
//	}
//	printf("\n");
//	int c[10] = { 0 };
//
//	for (i = 0; i < 10; i++)
//	{
//		c[i] = a[i];
//		a[i] = b[i];
//		b[i] = c[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\t", b[i]);
//	}
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	double i = 1.0;
//	double sum = 0.0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	for (i = 1.0; i < 100; i += 2)
//	{
//		sum1 += 1 / i;
//	}
//	for (i = 2.0; i <= 100; i += 2)
//	{
//		sum2 -= 1 / i;
//	}
//	sum = sum1 + sum2;
//	printf("%lf\n", sum);
//	system("pause");
//	getchar();
//	return 0;
//
//}
//#include <stdio.h>
//#include <stdlib.h>
int main()
{
	int i = 1;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			printf("%d\t", i);
			count++;
		}
		if (i / 10 == 9)
		{
			printf("%d\t", i);
			count++;
		}
	}
	printf("%d", count);
	system("pause");
	getchar();
	return 0;
}