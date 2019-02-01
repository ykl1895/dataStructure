#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
//链表结点构造
ListNode*  create_list_node(int val)
{
    ListNode* pNode = new ListNode(val);
    return pNode;
}
//链表结点连接
void connect_list_node(ListNode* pCur, ListNode* pNext)
{
    pCur->next = pNext;
}

ListNode* test() {
    //创建结点
    ListNode *pNode1 = create_list_node(1);
    ListNode *pNode2 = create_list_node(3);
    ListNode *pNode3 = create_list_node(3);
//    ListNode *pNode4 = create_list_node(2);
//    ListNode *pNode5 = create_list_node(7);
//    ListNode *pNode6 = create_list_node(1);
//    ListNode *pNode7 = create_list_node(1);
    //    ListNode* pNode8 = create_list_node(45);
    //    ListNode* pNode9 = create_list_node(-7);
    //连接结点
    connect_list_node(pNode1, pNode2);
    connect_list_node(pNode2, pNode3);
//    connect_list_node(pNode3, pNode4);
//    connect_list_node(pNode4, pNode5);
//    connect_list_node(pNode5, pNode6);
//    connect_list_node(pNode6, pNode7);
    pNode3->next=NULL;
    return pNode1;

}

void ListTraverse( ListNode* head)
{
    ListNode * p=head;
    while(p)
    {
        cout<<p->val<<' ';
        p=p->next;
    }
    cout<<endl;
}


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *pre=new ListNode(0);
        pre->next=head;
        ListNode*p1,*p2,*p3;
        ListNode*tmp=new ListNode(0);
        p1=pre;
        while(p1->next!=NULL)
        {
            tmp=p1;
            p1=p1->next;
            if (p1->next !=NULL && p1->next->val==p1->val)
            {
                while((p1->next!=NULL)&& p1->val==p1->next->val)
                {
                    p1=p1->next;
                }
                tmp->next=p1->next;
                p1=tmp;
            }

        }

        return pre->next;
    }

};




int main()
{
    ListNode * L= new ListNode(0);
    ListNode * newL= new ListNode(0);
    Solution solution;
    L=test();
    ListTraverse(L);
    newL=solution.deleteDuplicates(L);
    ListTraverse(newL);



    return 0;

}

