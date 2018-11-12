/*喝汽水，1瓶汽水1元，
2个空瓶可以换一瓶汽水， 
给20元，可以多少汽水。 
编程实现 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Buywater(int num)
{
	int n = 1, s;//n:这次新换的，s：上一次换过后剩余的
	int sum = num;
	while (n != 0)
	{
		n = num / 2;
		s = num % 2;
		num = n + s;
		sum = sum + n;
	}
	return sum;
}
int main()
{
	int money = 20;
	int num = 0;
	num = Buywater(money);
	printf("可以买%d瓶汽水\n", num);
	system("pause");
	return 0;
}
