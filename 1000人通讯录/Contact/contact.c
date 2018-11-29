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

void menu1()//�޸���ϵ��ʱ�õ��Ĳ˵�
{
	printf("****************************\n");
	printf("**** 1.name      2. sex ****\n");
	printf("**** 3.age       4. tel ****\n");
	printf("**** 5.Address   6. back****\n");
	printf("****************************\n");
}

void ADD_contact(Statis *p)
{
	printf("������Ҫ�����ϵ������: \n");
	scanf("%s", p->num[p->count].name);
	printf("������Ҫ�����ϵ���Ա�: \n");
	scanf("%s", p->num[p->count].sex);
	printf("������Ҫ�����ϵ������: \n");
	scanf("%d", &p->num[p->count].age);
	printf("������Ҫ�����ϵ�˵绰: \n");
	scanf("%s", p->num[p->count].tel);
	printf("������Ҫ�����ϵ�˵�ַ: \n");
	scanf("%s", p->num[p->count].addr);
	if ((p->count) > 1000)
	{
		printf("�Ѿ��ﵽ��������\n");
	}
	else
	{
		printf("�����ϵ�˳ɹ�\n");
		p->count++;
	}
}

void DELETE_contact(Statis *p)
{
	char name[NAME_SIZE] = { 0 };
	int result = 0;
	int i = 0;
	int n = 0;
	printf("������Ҫɾ����ϵ�˵�������\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("���Ƿ�Ҫɾ������ϵ��?\n");
		printf("ɾ���밴1����ɾ���밴0\n");
		scanf("%d", &n);
		if (n == 1)
		{
			for (i = 0; i < (p->count) - 1; i++)
			{
				p->num[i] = p->num[i + 1];
			}
			p->count--;
			printf("ɾ���ɹ�\n");
		}
		else
		{
			printf("ɾ��ʧ��\n");
		}
	}
	else
	{
		printf("��Ҫɾ������ϵ�˲�����\n");
	}
}

void SEARCH_contact(Statis *p)//������ϵ��
{
	char name[NAME_SIZE] = { 0 };
	int result = 0;
	printf("������Ҫ������ϵ�˵�������\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("������%s\n", p->num[result].name);
		printf("�Ա�%s\n", p->num[result].sex);
		printf("���䣺%d\n", p->num[result].age);
		printf("�绰��%s\n", p->num[result].tel);
		printf("��ַ��%s\n", p->num[result].addr);
	}
	else
	{
		printf("��Ҫ���ҵ���ϵ�˲�����\n");
	}
}

void UPDATE_contact(Statis *p)
{
	char name[NAME_SIZE];
	int result = 0;
	printf("��������Ҫ�޸ĵ���ϵ�˵�����:\n");
	scanf("%s", name);
	result = Find(p, name);
	if (result != -1)
	{
		printf("������%s\n", p->num[result].name);
		printf("�Ա�%s\n", p->num[result].sex);
		printf("���䣺%d\n", p->num[result].age);
		printf("�绰��%s\n", p->num[result].tel);
		printf("��ַ��%s\n", p->num[result].addr);
		int i = 0;
		do
		{
			menu1();
			printf("��������Ҫ�޸ĵ�ѡ��:\n");
			scanf("%d", &i);
			switch (i)
			{
			case 1:
				printf("��������޸ĳɣ�");
				scanf("%s", p->num[result].name);
				break;
			case 2:
				printf("����Ա��޸ĳɣ�");
				scanf("%s", p->num[result].sex);
				break;
			case 3:
				printf("��������޸ĳɣ�");
				scanf("%d", p->num[result].age);
				break;
			case 4:
				printf("��ѵ绰�޸ĳɣ�");
				scanf("%s", p->num[result].tel);
				break;
			case 5:
				printf("��ѵ�ַ�޸ĳɣ�");
				scanf("%s", p->num[result].addr);
				break;
			case 0:
				break;
			default:
				printf("�������\n");
				break;
			}
		} while (i);
	}
	else
	{
		printf("��Ҫ�޸ĵ���ϵ�˲�����\n");
	}
}

void DISPLAY_contact(Statis *p)
{
	int i = 0;
	printf("�����ͨѶ¼������ϵ�˵���Ϣ:\n");
	printf("%10s%7s%6d%8s%10s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < (p->count); i++)
	{
		printf("������%s\n", p->num[i].name);
		printf("�Ա�%s\n", p->num[i].sex);
		printf("���䣺%d\n", p->num[i].age);
		printf("�绰��%s\n", p->num[i].tel);
		printf("��ַ��%s\n", p->num[i].addr);
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