#include "linkman.h"

Statis sta;
void menu()
{
	printf("######################################\n");
	printf("######################################\n");
	printf("##   1. ADD              2. DELETE  ##\n");
	printf("##   3. SEARCH           4. UPDATE  ##\n");
	printf("##   5. DISPLAY          6. EMPTY   ##\n");
	printf("##   7.SORT              0. EXIT    ##\n");
	printf("######################################\n");
	printf("######################################\n");
}

void text()
{
	int i = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			ADD_contact(&sta);
			break;
		case 2:
			DELETE_contact(&sta);
			break;
		case 3:
			SEARCH_contact(&sta);
			break;
		case 4:
			UPDATE_contact(&sta);
			break;
		case 5:
			DISPLAY_contact(&sta);
			break;
		case 6:
			EMPTY_contact(&sta);
			break;
		case 7:
			SORT_contact(&sta);
			break;
		case 0:
			printf("即将退出\n");
			Destroy(&sta);
			exit(1);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (i);
}

int main()
{
	init_contact(&sta);
	text();
	system("pause");
	return 0;
}