#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"
#include "io.h"
#include "math.h"
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* 存储空间初始分配量 */

typedef int Status;/* Status是函数的类型,其值是函数结果状态代码，如OK等 */
typedef int ElemType;/* ElemType类型根据实际情况而定，这里假设为int */

typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;

typedef struct Node *LinkList;

Status visit(ElemType c)
{
    printf("%d ",c);
    return OK;
}

Status InitList(LinkList *L)
{
    *L=(LinkList)malloc(sizeof(Node));
    if(!(*L))
        return ERROR;
    (*L)->next=NULL;
    return OK;
}

Status ListEmpty(LinkList L)
{
    if(L->next)
        return FALSE;
    else
        return TRUE;

}

Status ClearList(LinkList *L)
{
    LinkList p ,q;
    p=(*L)->next;
    while(p)
    {
        q=p->next;
        free(p);
        p=q;
    }
    (*L)->next=NULL;
}

int ListLentgh(LinkList L)
{
    int i=0;
    LinkList p=L->next;
    while(p)
    {
        i++;
        p=p->next;
    }
    return i;
}

Status GetElem(LinkList L,int i,ElemType *e)
{
    LinkList p;
    p=L->next;
    int j;
    j=1;
    while(p&&j<i)
    {
        p=p->next;
        ++j;
    }
    if(j>i||!p)
        return ERROR;
    *e=p->data;
    return OK;
}

int LocateElem(LinkList L,ElemType e)
{
    LinkList p;
    p=L->next;
    int i=0;
    while(p)
    {
        i++;
        if(p->data==e)
            return i;
        p=p->next;
    }
    return 0;
}

Status ListInsert(LinkList *L,int i,ElemType e)
{
    int j;
    LinkList p, s;
    p = *L;
    j = 1;
    while (p && j <= i - 1)
    {
        p = p->next;
        j++;
    }

    if (!p || j > i)
        return ERROR;
    s = (LinkList) malloc(sizeof(Node));
    s->data = e;
    s->next=p->next;
    p->next=s;
    return OK;

}

Status ListDelete(LinkList *L,int i,ElemType *e)
{
    LinkList p ,q;
    int j;
    p=*L;
    while(p&&j<i)
    {
        p=p->next;
        ++j;
    }
    if (!p||j>i)
        return ERROR;
    q=p->next;
    p->next=p->next->next;
    *e=q->data;
    free(q);
    return OK;
}

Status ListTraverse(LinkList L)
{
    LinkList p=L->next;
    while(p)
    {
        visit(p->data);
        p=p->next;
    }
    printf("\n");
    return  OK
}

void CreateListHead(LinkList *L,int n)
{
    LinkList p;
    int i;
    srand(time(0));
    *L=(LinkList)malloc(sizeof(Node));
    (*L)->next=NULL;
    for (i=0;i<n;i++)
    {
        p=(LinkList)malloc(sizeof(Node));
        p->data=rand()%100+1;
        p->next=(*L)->next;
        (*L)->next=p;
    }
}

void CreateListTail(LinkList *L,int n)
{
    LinkList p,r;
    int i;
    srand(time(0));
    *L=(LinkList)malloc(sizeof(Node));
    r=*L;
    for(i=0;i<=n-1;i++)
    {
        p=(LinkList)malloc(sizeof(Node));
        p->data=rand()%100+1;
        r->next=p;
        r=p;
    }
    r->next=NULL;
}
