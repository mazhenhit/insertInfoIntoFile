#ifndef _LIST_H_
#define _LIST_H_

typedef struct ListNode
{
	char content[100];
	struct ListNode *pNext;
}ListNode;

typedef struct ListTblInfo
{
	int num;
	struct ListTblInfo *pNext;
}ListTblInfo;

#endif
