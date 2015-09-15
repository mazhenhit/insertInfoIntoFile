#include <stdlib.h>
#include <stdio.h>

#include "list.h"

ListNode *addToTail(ListNode *pHead, char *str)
{
	ListNode *pNew = NULL;
	ListNode *pNode = NULL;

	pNew = (ListNode *)malloc(sizeof(ListNode)); 
	snprintf(pNew->content, 100, "%s", str);
	pNew->pNext = NULL;
	
	if(pHead == NULL)
	{
		pHead = pNew;
	}
	else
	{
		pNode = pHead;
		
		while(pNode->pNext != NULL)
		{
			pNode = pNode->pNext;
		}
		
		pNode->pNext = pNew;
	}
	return pHead;
}

