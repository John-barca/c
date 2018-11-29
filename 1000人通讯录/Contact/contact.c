#include "linkman.h"

void init_contact(Statis *p)
{
	int count = sizeof(p->num);
	p->count = 0;
	memset(p->num, 0, count);
}

int Find(Statis *p, char *pname)
{
	int i = 0;
	for (i = 0; i < (p->count); i++)
	{
		if (strcmp(p->num[i].name, pname) == 0)
		{
			return i;
		}
		return -1;
	}
}

void menu1()//修改联系人时用到的菜单
{
	printf("****************************\n");
	printf("**** 1.name      2. sex ****\n");
	printf("**** 3.age       4. tel ****\n");
	printf("**** 5.Address   6. back****\n");
	printf("****************************\n");
}

void ADD_contact(Statis *p)
{
	printf("请输入要添加联系人姓名: \n");
	scanf("%s", p->num[p->count].name);
	printf("请输入要添加联系人性别: \n");
	scanf("%s", p->num[p->count].sex);
	printf("请输入要添加联系人年龄: \n");
	scanf("%d", &p->num[p->count].age);
	printf("请输入要添加联系人电话: \n");
	scanf("%s", p->num[p->count].tel);
	printf("请输入要添加联系人地址: \n");
	scanf("%s", p->num[p->count].addr);
	if ((p->count) > 1000)
	{
		printf("已经达到人数上限\n");
	}
	else
	{
		printf("添加联系人成功\n");
		p->count++;
	}
}

void DELETE_contact(Statis *p)
{
	char name[NAME_SIZE] = { 0 };
	int result = 0;
	int i = 0;
	int n = 0;
	printf("请输入要删除联系人的姓名：\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("你是否要删除该联系人?\n");
		printf("删除请按1，不删除请按0\n");
		scanf("%d", &n);
		if (n == 1)
		{
			for (i = 0; i < (p->count) - 1; i++)
			{
				p->num[i] = p->num[i + 1];
			}
			p->count--;
			printf("删除成功\n");
		}
		else
		{
			printf("删除失败\n");
		}
	}
	else
	{
		printf("你要删除的联系人不存在\n");
	}
}

void SEARCH_contact(Statis *p)//查找联系人
{
	char name[NAME_SIZE] = { 0 };
	int result = 0;
	printf("请输入要查找联系人的姓名：\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("姓名：%s\n", p->num[result].name);
		printf("性别：%s\n", p->num[result].sex);
		printf("年龄：%d\n", p->num[result].age);
		printf("电话：%s\n", p->num[result].tel);
		printf("地址：%s\n", p->num[result].addr);
	}
	else
	{
		printf("你要查找的联系人不存在\n");
	}
}

void UPDATE_contact(Statis *p)
{
	char name[NAME_SIZE];
	int result = 0;
	printf("请输入需要修改的联系人的姓名:\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("姓名：%s\n", p->num[result].name);
		printf("性别：%s\n", p->num[result].sex);
		printf("年龄：%d\n", p->num[result].age);
		printf("电话：%s\n", p->num[result].tel);
		printf("地址：%s\n", p->num[result].addr);
		int i = 0;
		do
		{
			menu1();
			printf("请输入你要修改的选项:\n");
			scanf("%d", &i);
			switch (i)
			{
			case 1:
				printf("请把姓名修改成：");
				scanf("%s", p->num[result].name);
				break;
			case 2:
				printf("请把性别修改成：");
				scanf("%s", p->num[result].sex);
				break;
			case 3:
				printf("请把年龄修改成：");
				scanf("%d", p->num[result].age);
				break;
			case 4:
				printf("请把电话修改成：");
				scanf("%s", p->num[result].tel);
				break;
			case 5:
				printf("请把地址修改成：");
				scanf("%s", p->num[result].addr);
				break;
			case 0:
				break;
			default:
				printf("输入错误\n");
				break;
			}
		} while (i);
	}
	else
	{
		printf("你要修改的联系人不存在\n");
	}
}

void DISPLAY_contact(Statis *p)
{
	int i = 0;
	printf("将输出通讯录所有联系人的信息:\n");
	printf("%10s%7s%6d%8s%10s\n", "姓名", "性别", "年龄", "电话", "地址");
	for (i = 0; i < (p->count); i++)
	{
		printf("姓名：%s\n", p->num[i].name);
		printf("性别：%s\n", p->num[i].sex);
		printf("年龄：%d\n", p->num[i].age);
		printf("电话：%s\n", p->num[i].tel);
		printf("地址：%s\n", p->num[i].addr);
		printf("\n");
	}
}

void EMPTY_contact(Statis *p)
{
	p->count = 0;
}

void SORT_contact(Statis *p)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < p->count - 1; i++)
	{
		for (j = 0; j > p->count - 1 - i; j++)
		{
			if (strcmp(p->num[j].name, p->num[j + 1].name) > 0)
			{
				CONTACT tmp;
				tmp = p->num[j];
				p->num[j] = p->num[j + 1];
				p->num[j + 1] = tmp;
			}
		}
	}
}