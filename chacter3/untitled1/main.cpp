#include <iostream>
using namespace std;
struct MyListNode
{
    int val;
    struct MyListNode *next;

};
class MyLinkedList {
public:
    MyListNode *head;
    /** Initialize your data structure here. */
    MyLinkedList() {
        head=new MyListNode;
        head ->next= NULL;
        cout<<"初始化成功:"<<'\n';
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        MyListNode *tmp=head->next;
        int j=0;
        while(tmp&&j<index)
        {
            tmp=tmp->next;
            ++j;
        }
        if(!tmp||j>index)
            return -1;
        return tmp->val;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    int addAtHead(int val) {
        MyListNode * new_L = new MyListNode;
        new_L->val=val;
        new_L->next=head->next;
        head->next=new_L;
        return new_L->val;
    }

    /** Append a node of value val to the last element of the linked list. */
    int addAtTail(int val) {
        MyListNode *new_L=new MyListNode;
        new_L->val=val;
        new_L->next=NULL;
        if(head->next!=NULL)
        {
            MyListNode * tmp = head->next;
            while(tmp->next!=NULL)
            {
                tmp=tmp->next;
            }
            tmp->next=new_L;
            return tmp->next->val;
        }
        else {
            head->next=new_L;
            return head->next->val;
        }

    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        int j=0;
        if(head->next==NULL||j>index)
            return;
        while(head->next!=NULL && j<index)
        {
            head=head->next;
            ++j;
        }
        MyListNode *newNode = new MyListNode;
        newNode->val=val;
        newNode->next=NULL;
        head->next=newNode;
        return;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        int j=1;

        if (j > index||head->next==NULL)
            return ;            /* 第i个元素不存在 */
        while(head->next!=NULL && j<index)
        {
            head=head->next;
            ++j;
        }
        MyListNode *tmp;
        tmp=head->next;
        head->next=tmp->next;
        delete(tmp);
    }
};


int main()
{
    int i=0,j=0;
    MyLinkedList linkedList ;
    i=linkedList.addAtHead(1);
    cout<<i<<endl;
    i=linkedList.addAtTail(3);
    cout<<i<<endl;
    linkedList.addAtIndex(1,2);   //链表变为1-> 2-> 3
    i=linkedList.get(1);            //返回2
    cout<<i<<'\n';
    linkedList.deleteAtIndex(1);  //现在链表是1-> 3
    j=linkedList.get(1);            //返回3
    cout<<j<<'\n';
    return 0;
}