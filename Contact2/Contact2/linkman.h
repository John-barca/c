#pragma once
#ifndef _LINKMAN_H_
#define _LINKMAN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

#define NAME_SIZE 20
#define SEX_SIZE 10
#define TEL_SIZE 12
#define ADDR_SIZE 50
#define SIZE 2
#define INIT_SIZE 3

typedef struct CONTACT
{
	char name[NAME_SIZE];
	char sex[SEX_SIZE];
	int age;
	char tel[TEL_SIZE];
	char addr[ADDR_SIZE];
}CONTACT;

typedef struct Statis
{
	struct CONTACT *num;
	int count;
	int sz;
}Statis;

void init_contact(Statis *p);
void check_sz(Statis* p);
void ADD_contact(Statis *p);
void DELETE_contact(Statis *p);
void SEARCH_contact(Statis *p);
void UPDATE_contact(Statis *p);
void DISPLAY_contact(Statis *p);
void EMPTY_contact(Statis *p);
void SORT_contact(Statis *p);
void read_from_file(Statis *p);
void save_to_file(Statis *p);

#endif // !_LINKMAN_H_

