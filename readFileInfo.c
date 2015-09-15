#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "appCmn.h"

ListNode *readFileInfo(ListNode *pHead, char *fileName)
{
	FILE *fd;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	ListNode *pTemp;

	if((fd = fopen(fileName, "r")) == NULL)
	{
		printf("error: fopen\n");
		return NULL;
	}

	printf("Open file success...\n");

	while((read = getline(&line, &len, fd)) != -1)
	{
		pHead = addToTail(pHead, line);
	}

	if(line)
		free(line);

	pTemp = pHead;
	while(pTemp != NULL)
	{
		printf("%s", pTemp->content);
		pTemp = pTemp->pNext;
	}

	return pHead;
}

