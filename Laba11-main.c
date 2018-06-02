#include "files.h"

int main()
{
	if (!CreateTxtFile())return;
	NODE* Root1 = MakeConcordance();
	printf("\n\nPre - order:\n");
	Pre_Order(Root1);
	printf("\n\nIn - order:\n");
	In_Order(Root1);
	printf("\n\nPost - order:\n");
	Post_Order(Root1);
	//printf("\n\nLevel - order:\n");
	//Level_Order(Root1);
	printf("\n\nTask:\n");
	Task(Root1);
	DelTree(Root1);
	return 0;
}
