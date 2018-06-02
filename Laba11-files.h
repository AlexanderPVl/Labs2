#pragma once

#include <malloc.h>
#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#define WRD_LN 20
#define TXT_FL_NM "Text_File.txt"

typedef struct
{
	int Count;
	int Str;
} VALUE;

typedef struct NODE
{
	int Count;
	char Str[WRD_LN];
	struct NODE* Left;
	struct NODE* Right;
} NODE;

int CorrStrScan(char* Dest);
int CreateTxtFile();
NODE* MakeConcordance();
void AddNode(NODE* head, char* Str);
void Pre_Order(NODE* head);
void In_Order(NODE* head);
void Post_Order(NODE* head);
void Level_Order(NODE* root);
void DelTree(NODE* root);
int Task(NODE* root);
void PushBask(NODE*** Queue, NODE* new, int* cnt);
int CountSubtree(NODE* root, int* count);
