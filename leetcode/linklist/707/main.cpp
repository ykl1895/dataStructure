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


    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        MyListNode * new_L = new MyListNode;
        new_L->val=val;
        new_L->next=head->next;
        head->next=new_L;
    }

    /** Append a node of value val to the last element of the linked list. */

    void addAtTail(int val) {
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

        }
        else {
            head->next=new_L;

        }

    }
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        int j=0;
        MyListNode *p=head;


        while(p!=NULL && j<index)
        {
            p=p->next;
            ++j;
        }

        if((p==NULL)||j>index)
            return ;

        if(p->next==NULL)
        {
            addAtTail(val);
            return;
        } else
        {
            MyListNode *newNode = new MyListNode;
            newNode->val=val;
            newNode->next=p->next;
            p->next=newNode;
        }

    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        int j=0;
        MyListNode *p=head;


        while((p->next)!=NULL && j<index)
        {
            p=p->next;
            ++j;
        }

        if (j > index||(p->next)==NULL)
            return ;            /* 第i个元素不存在 */

        MyListNode *tmp;
        tmp=p->next;
        p->next=tmp->next;
        delete(tmp);
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        MyListNode *tmp=head;
        int j=0;
        while((tmp->next) && j<index)
        {
            tmp=tmp->next;
            ++j;
        }
        if(!(tmp->next)||j>index)
            return -1;
        return tmp->next->val;
    }

    void ListTraverse( )
    {
        MyListNode * p=head->next;
        while(p)
        {
            cout<<p->val<<' ';
            p=p->next;
        }
        cout<<endl;
    }

};


int main()
{
    int i=0,j=0;
    MyLinkedList linkedList ;
    linkedList.get(0);
    linkedList.ListTraverse();
    linkedList.addAtIndex(1,2);
    linkedList.ListTraverse();
    i=linkedList.get(0);
    cout<<i<<endl;
    i=linkedList.get(1);
    cout<<i<<endl;
    linkedList.addAtIndex(0,1);
    linkedList.ListTraverse();
    i=linkedList.get(0);
    cout<<i<<endl;
    i=linkedList.get(1);
    cout<<i<<endl;
//    linkedList.addAtHead(38);
//    linkedList.addAtHead(45);
//    linkedList.deleteAtIndex(2);
//    linkedList.ListTraverse();
//    linkedList.addAtIndex(1,24);
//    linkedList.addAtTail(36);
//    linkedList.addAtIndex(3,72);
//    linkedList.addAtTail(76);
//    linkedList.addAtHead(7);
//    linkedList.addAtHead(36);
//    linkedList.addAtHead(34);
//    linkedList.addAtTail(91);
//    linkedList.addAtTail(69);
//    linkedList.addAtHead(37);
//    linkedList.addAtTail(38);
//    linkedList.addAtTail(4);
//    linkedList.addAtHead(66);
//    linkedList.addAtTail(38);
//    linkedList.deleteAtIndex(14);
//    linkedList.addAtTail(12);
//    linkedList.addAtTail(32);
//    linkedList.get(5);
//    linkedList.addAtIndex(7,5);
//    linkedList.addAtHead(74);
//    linkedList.get(7);
//    linkedList.get(13);
//    linkedList.addAtHead(11);
//    linkedList.get(8);
//    linkedList.addAtIndex(10,9);
//    linkedList.addAtTail(19);
//    linkedList.addAtIndex(3,76);
//    linkedList.addAtHead(7);
//    linkedList.addAtHead(37);
//    linkedList.addAtHead(99);
//    linkedList.get(10);
//    linkedList.addAtHead(12);
//    linkedList.addAtIndex(1,20);
//    linkedList.addAtTail(29);
//    linkedList.addAtHead(42);
//    linkedList.addAtIndex(21,52);
//    linkedList.get(11);
//    linkedList.addAtTail(44);
//    linkedList.addAtTail(47);
//    linkedList.addAtIndex(6,27);
//    linkedList.addAtIndex(31,85);
//    linkedList.addAtHead(59);
//    linkedList.addAtHead(57);
//    linkedList.get(4);
//    linkedList.addAtTail(99);
//    linkedList.addAtIndex(13,83);
//    linkedList.addAtIndex(10,34);
//    linkedList.addAtHead(48);
//    linkedList.deleteAtIndex(9);
//    linkedList.addAtIndex(22,64);
//    linkedList.addAtHead(69);
//    linkedList.deleteAtIndex(33);
//    linkedList.addAtTail(5);
//    linkedList.deleteAtIndex(18);
//    linkedList.addAtTail(87);
//    linkedList.addAtHead(42);
//    linkedList.addAtTail(1);
//    linkedList.addAtTail(35);
//    linkedList.addAtHead(31);
//    linkedList.addAtTail(67);
//    linkedList.addAtIndex(36,46);
//    linkedList.deleteAtIndex(23);
//    linkedList.addAtHead(64);
//    linkedList.addAtHead(81);
//    linkedList.addAtHead(29);
//    linkedList.addAtTail(50);
//    linkedList.get(23);
//    linkedList.addAtIndex(36,63);
//    linkedList.addAtTail(8);
//    linkedList.addAtTail(19);
//    linkedList.addAtTail(98);
//    linkedList.deleteAtIndex(22);
//    linkedList.get(28);
//    linkedList.addAtHead(42);
//    linkedList.get(24);
//    linkedList.get(34);
//    linkedList.addAtTail(32);
//    linkedList.deleteAtIndex(25);
//    linkedList.addAtTail(53);
//    linkedList.addAtIndex(55,76);
//    linkedList.addAtHead(38);
//    linkedList.addAtIndex(23,98);
//    linkedList.addAtTail(27);
//    linkedList.get(18);
//    linkedList.addAtIndex(44,27);
//    linkedList.addAtIndex(16,8);
//    linkedList.addAtHead(70);
//    linkedList.addAtHead(15);
//    linkedList.get(9);
//    linkedList.get(27);
//    linkedList.get(59);
//    linkedList.addAtIndex(40,50);
//    linkedList.addAtHead(15);
//    linkedList.addAtIndex(11,57);
//    linkedList.addAtHead(80);
//    linkedList.addAtTail(50);
//    linkedList.addAtIndex(23,37);
//    linkedList.get(12);
//    linkedList.ListTraverse();
    return 0;
}