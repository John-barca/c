#include<stdio.h>
#include<stdlib.h>
//void pr_start(int _num)
//{
//	int n = 0;
//	int i = 0;
//	for (n = 1; n <= 2 * _num; n++)
//	{
//		int temp = n;
//		if (n > _num)
//		{
//			temp -= 2 * (n - _num);
//		}
//		for (i = 1; i < 2 * _num; i++)
//		{
//			if ((i >= (_num - temp + 1)) && (i <= (temp + _num - 1)))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("Please enter a number£º");
//	scanf("%d", &num);
//	pr_start(num);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	int a = 0, b = 0, c = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a = i / 100;
//		b = (i / 10) % 10;
//		c = i % 10;
//		if (i == a * a*a + b * b*b + c * c*c)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	getchar();
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i = 0, sum = 0;
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//
//	for (i = 0; i < 5; i++)
//	{
//		m = m * 10 + n;
//		sum += m;
//
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int ch, i = 0;
	ch = getchar();
	if (ch == '}')
	{
		printf("unmatched");
	}
	while (ch != EOF)
	{
		if (ch == '{')
		{
			i++;
		}
		if (ch == '}')
		{
			i--;
		}
		ch = getchar();
	}
	{
		if (i == 0)
		{
			printf("matched");
		}
		else
		{
			printf("unmatched");
		}
	}
	system("pause");
	return 0;
}