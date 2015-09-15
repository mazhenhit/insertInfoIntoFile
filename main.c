#include <stdio.h>
#include <stdlib.h>

#include "appCmn.h"
#include "list.h"
#include "readFileInfo.h"

int main()
{
	char *fileName = "ex.txt";
	ListNode *pHead;

	printf("Begin to read file...\n");

	if(readFileInfo(pHead, fileName) == NULL)
	{
		printf("error \n");
		return -1;
	}

	return 0;
}
