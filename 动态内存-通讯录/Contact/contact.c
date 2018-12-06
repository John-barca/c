#include "contact.h"

void init_contact(pContact p)
{
	p->sz = 0;
	p->contact = (People_inf *)malloc(DEFAULT_SZ * sizeof(People_inf));
	if (NULL == p->contact)
	{
		perror( "init_contact :: malloc" );
		exit( EXIT_FAILURE );
	}
	memset(p->contact, 0, DEFAULT_SZ * sizeof(p->contact));
	p->capacity = DEFAULT_SZ;
}

void Destroy_contact(pContact p)
{
	free(p->contact);
	p->contact = NULL;
	p->sz = 0;
	p->capacity = 0;
}

int check_contact(pContact p)
{
	if (p->sz == p->capacity)
	{
		People_inf *tmp = realloc(p->contact,
			(p->capacity + DEFAULT_INC)+sizeof(People_inf));
		if (tmp != NULL)
		{
			p->contact = tmp;
			p->capacity = DEFAULT_INC;
			printf("扩容成功！！！\n");
			return 1;
		}
		else
			return 0;
	}
	return 1;
}

void add_contact(pContact p)
{
	if (check_contact(p) == 0)
	{
		return;
	}
	printf("请输入联系人姓名:\n");
	scanf("%s", p->contact[p->sz].name);
	printf("请输入联系人年龄:\n");
	scanf("%d", &(p->contact[p->sz].age));
	printf("请输入联系人性别:\n");
	scanf("%s", p->contact[p->sz].sex);
	printf("请输入联系人电话:\n");
	scanf("%s", p->contact[p->sz].tele);
	printf("请输入联系人地址:\n");
	scanf("%s", p->contact[p->sz].addr);
	printf("添加联系人完成!\n");
}

void show_contact(pContact p)
{
	int i = 0;
	printf("%12s\t%4d\t%5s\t%12s\t%12s\n", "name", "age", "sex", "tele", "addr");
	for (i = 0; i < p->sz; i++)
	{
		printf("%12s\t%4d\t%5s\t%12s\t%12s\n",
			p->contact[i].name,
			p->contact[i].age,
			p->contact[i].sex,
			p->contact[i].tele,
			p->contact[i].addr);
	}
}

static int Search(pContact p,char name)
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(name, p->contact[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void del_contact(pContact p)
{
	int pos = 0;
	char name[MAX_NAME] = { 0 };
	if (p->sz == 0)
	{
		printf("通讯录已空\n");
		return;
	}
	printf("请输入你想要删除的记录\n");
	scanf("%s", &name);
	pos = Search(p, name);
	if (pos == -1)
	{
		printf("目标记录不存在!!\n");
	}
	else
	{
		memmove(p->contact + pos,
			p->contact + pos + 1,
			(p->sz - pos - 1) * sizeof(People_inf));
		p->sz--;
		printf("删除成功\n");
	}
}
