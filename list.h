#ifndef _LIST_H_
#define _LIST_H_

typedef struct TblInfo
{
	char content[100];
	int num;
}TblInfo;

typedef struct ListNode
{
	char content[100];
	struct ListNode *pNext;
}ListNode;

typedef struct ListTblInfo
{
	TblInfo tblInfo;
	struct ListTblInfo *pNext;
}ListTblInfo;

ListNode *addToTail(ListNode *pHead, char *str);

#endif
