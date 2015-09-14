#include <stdio.h>
#include <stdlib.h>
#include "readFileInfo.h"

INT32 readFileInfo(char *fileName, ListNode **pHead)
{
	FILE *fd;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	ListNode *pTemp;

	if((fd = fopen(fileName, "r")) == NULL)
	{
		return FAILURE;
	}

	while((read = getline(&line, &len, fd)) != -1)
	{
		addToTailFile(**pHead, line);
	}

	if(line)
		free(line);

	pTemp = *pHead;
	while(pTemp != NULL)
	{
		printf("%s", pTemp->content);
		pTemp = pTemp->pNext;
	}

	return SUCCESS;
}


