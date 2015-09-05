#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void addToTailFile(ListNode **pHead, char *str)
{
	ListNode *pNew = (ListNode *)malloc(sizeof(ListNode)); 
	snprintf(pNew->content, 100, "%s", str);
	pNew->pNext = NULL;
	
	if(*pHead == NULL)
	{
		*pHead = pNew;
	}
	else
	{
		ListNode *pNode = *pHead;
		
		while(pNode->pNext != NULL)
		{
			pNode = pNode->pNext;
		}
		
		pNode->pNext = pNew;
	}
}

void addToTailTbl(ListTblInfo **pHead, char *str)
{
	ListTblInfo *pNew = (ListTblInfo *)malloc(sizeof(ListTblInfo)); 
//	snprintf(pNew->content, 100, "%s", str);
	pNew->pNext = NULL;
	
	if(*pHead == NULL)
	{
		*pHead = pNew;
	}
	else
	{
		ListTblInfo *pNode = *pHead;
		
		while(pNode->pNext != NULL)
		{
			pNode = pNode->pNext;
		}
		
		pNode->pNext = pNew;
	}
}
