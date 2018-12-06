#pragma once
#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

#define DEFAULT_INC 2 //ÿ�ο��ٵ��ڴ��С
#define DEFAULT_SZ 3 //Ĭ�ϴ�С
#define MAX 1000
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 20
#define MAX_ADDR 50

//������Ϣ�ṹ��
typedef struct People_inf {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}People_inf;

//ͨѶ¼��Ϣ�ṹ��
typedef struct Contact {
	People_inf *contact;//���ݴ��λ��
	int sz;//�����Ч����
	int capacity;
}Contact,*pContact;

//�ӿ�
void init_contact(pContact p);
void add_contact(pContact p);
void show_contact(pContact p);
void del_contact(pContact p);
int check_contact(pContact p);

#endif // !_CONTACT_H_

