#include "stdio.h"

#include "stdlib.h"
#include "io.h"
#include "math.h"
#include "time.h"

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define MAXSIZE 20 /* �洢�ռ��ʼ������ */

typedef int Status;          /* Status�Ǻ���������,��ֵ�Ǻ������״̬���룬��OK�� */
typedef int ElemType;        /* ElemType���͸���ʵ������������������Ϊint */

Status visit(ElemType c)
{
    printf("%d ",c);
    return OK;
}

typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

Status InitList(SqList *L)
{
    L->length=0;
    return OK;
}

Status ListEmpty(SqList L)
{
    if(L.length==0)
        return TRUE;
    else
        return FALSE;
}

Status ClearList(SqList *L)
{
    L->length=0;
    return OK;
}

int ListLength(SqList L)
{
    return L.length;
}

Status GetElem(SqList L,int i,ElemType *e)
{
    if(L.length==0||i<1||i>L.length)
        return ERROR;
    *e=L.data[i-1];
    return OK;
}

int LocateElem(SqList L ,ElemType e)
{
    int i;
    if(L.length==0)
        return 0;
    for(i=0;i<L.length;i++)
    {
        if(L.data[i]==e)
            break;
    }
    if(i>=L.length)
        return 0;

    return  i+1;
}

Status ListInsert(SqList *L,int i,ElemType e)
{
    int k;
    if(L->length==MAXSIZE)
        return ERROR;
    if(i<1||i>L->length+1)
        return ERROR;

//    if(i<=L->length)
//    {
    for(k=L->length-1;k>=i-1;k--)
        L->data[k+1]=L->data[k];
//    }
    L->data[i-1]=e;
    L->length++;

    return  OK;
}


Status ListDelete(SqList *L,int i,ElemType *e)
{
    int k;
    if(L->length==0)
        return ERROR;
    if(i<1||i>L->length)
        return ERROR;
    *e=L->data[i-1];
//    if(i<L->length)
//    {
    for(k=i;k<=L->length-1;k++)
        L->data[k-1]=L->data[k];
//    }
    L->length--;

    return OK;
}

Status ListTraverse(SqList L)
{
    int i;
    for (i=0;i<=L.length-1;i++)
        visit(L.data[i]);
    printf("\n");
    return OK;
}

void unionL(SqList *La,SqList Lb)
{
    int La_len,Lb_len,i;
    ElemType e;
    La_len=ListLength(*La);
    Lb_len=ListLength(Lb);
    for (i=1;i<=Lb_len;i++)
    {
        GetElem(Lb,i,&e);
        if(!LocateElem(*La,e))
            ListInsert(La,++La_len,e);
    }
}

int main( )
{
    SqList L;
    SqList Lb;
    ElemType e;
    Status i;
    int j,k;

    InitList(&L);
    i=printf("��ʼ��L��L.length=%d\n",L.length);
    for(j=1;j<=5;j++)
        i=ListInsert(&L,1,j);
    printf("��L�ı�ͷ���β���1��5��L.data= ");
    ListTraverse(L);
    printf("L.length=%d \n",L.length);

    i=ClearList(&L);
    printf("���L��L.length=%d\n",L.length);
    i=ListEmpty(L);
    printf("L�Ƿ�գ�i=%d(1:�� 0:��)\n",i);

    for(j=1;j<=10;j++)
        i=ListInsert(&L,j,j);
    printf("��L�ı�β���β���1��10��L.data=");
    ListTraverse(L);
    printf("L.length=%d \n",L.length);

    ListInsert(&L,1,0);
    printf("��L�ı�ͷ����0��L.data=");
    ListTraverse(L);
    printf("L.length=%d \n",L.length);

    GetElem(L,5,&e);
    printf("��5��Ԫ�ص�ֵΪ��%d\n",e);

    k=ListLength(L);
    for(j=k+1;j<k;k--)
    {
        i=ListDelete(&L,j,&e);
        if(i==ERROR)
            printf("ɾ����%d������ʧ��\n",j);
        else
            printf("ɾ����%d������ֵΪ��%d\n",j,k);

    }
    printf("�������L��Ԫ�أ�");
    ListTraverse(L);

    j=5;
    ListDelete(&L,j,&e); /* ɾ����5������ */
    printf("ɾ����%d����Ԫ��ֵΪ��%d\n",j,e);

    printf("�������L��Ԫ�أ�");
    ListTraverse(L);

    //����һ����10������Lb
    i=InitList(&Lb);
    for(j=6;j<=15;j++)
        i=ListInsert(&Lb,1,j);
    printf("Lb��Ԫ��Ϊ��");
    ListTraverse(Lb);

    unionL(&L,Lb);
    printf("��������ϲ���Lb��L��Ԫ�أ�");
    ListTraverse(L);

    return  0;




}



