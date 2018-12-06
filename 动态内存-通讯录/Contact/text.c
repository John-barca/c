#include "contact.h"

enum Op
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	EMPTY,
	SORT
};

void menu()
{
	printf("##################################\n");
	printf("###    1.add         2.del     ###\n");
	printf("###    3.search      4.modify  ###\n");
	printf("###    5.show        6.empty   ###\n");
	printf("###    7.sort        0.exit    ###\n");
	printf("##################################\n");
}

text()
{
	int input = 0;
	Contact my_con;
	init_contact(&my_con);
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			add_contact(&my_con);
			break;
		case 2:
			del_contact(&my_con);
			break;
		case 3:
		
			break;
		case 4:
			
			break;
		case 5:
			show_contact(&my_con);
			break;
		case 6:
			
			break;
		case 7:
			
			break;
		case 0:
			printf("退出程序");
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	text();
	system("pause");
	return 0;
}