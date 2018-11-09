#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"
double start, finish;
void game()
{
	int ret = 0;
	init_mine();//��ʼ����Һ����������
	set_mine();//����������̲���
	print_mine();//��ӡ���������
	printf("----------------------------------\n");
	print_player();//��ӡ�������
	start = clock();
	safe_mine();

	if (count_show_mine() == COUNT)//һ����Ӯ�����
	{
		print_mine();
		printf("���Ӯ!!!\n\n");
		return;
	}
	print_player();//��ӡ�������
	while (1)//ѭ��ɨ��
	{
		int ret = sweep_mine();//ɨ�ף��ȵ��׷���1��û�ȵ�����0
		if (count_show_mine() == COUNT)//ʣ���������Ϊ����ɨ��ʤ��
		{
			print_mine();//��ӡ���������
			printf("���Ӯ������\n\n");
			finish = clock();//ȡ����ʱ��
			printf("��ʱ%d��\n", (int)(finish - start) / CLOCKS_PER_SEC);
			break;
		}
		if (ret)//�ж��Ƿ�ȵ���
		{
			printf("����ը��\t");
			finish = clock();//ȡ����ʱ��
			printf("��ʱ%d��\n", (int)(finish - start) / CLOCKS_PER_SEC);
			print_mine();//��ӡ���������鿴����
			break;
		}
		print_player();//��ӡ�������
	}
}
int main()
{
	srand((unsigned int)time(NULL));//���������������
	int input = 0;
	menu();//�˵�
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
		menu();
		printf("continue?\n");
	} while (input);
	system("pause");
	return 0;
}