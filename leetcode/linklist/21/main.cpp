#include <iostream>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode (int x): val(x), next(NULL) {}
};

class Solution{
public:
    ListNode* mergeTwoLists(ListNode* p1, ListNode* p2)
    {
        if(p1 == NULL)
            return p2;
        else if(p2 == NULL)
            return p1;

        ListNode* pMergedHead ;
        if(p1->val < p2->val)
        {
            pMergedHead = p1;
            pMergedHead->next = mergeTwoLists(p1->next, p2);
        }
        else
        {
            pMergedHead = p2;
            pMergedHead->next = mergeTwoLists(p1, p2->next);
        }

        return pMergedHead;
    }


    void ListTraverse(ListNode *L )
    {
        ListNode * p=L->next;
        while(p)
        {
            cout<<p->val<<' ';
            p=p->next;
        }
        cout<<endl;
    }

    void CreateListHead(ListNode * L,int n)
    {
        ListNode *p =L ;
        for (int i=1;i<n;++i)
        {
            ListNode* pnewNode=new ListNode(0);
            pnewNode->val=i;
            pnewNode->next=NULL;
            p->next=pnewNode;
            p=pnewNode;
        }

    }

};



int main ()
{
    ListNode* L;
    L=new ListNode(0);
    ListNode* L1;
    L1=new ListNode(0);
    ListNode* L2;
    L2=new ListNode(0);
    Solution solution;
    solution.CreateListHead(L,4);
    solution.ListTraverse(L);
    solution.CreateListHead(L1,3);
    solution.ListTraverse(L1);

    L2=solution.mergeTwoLists(L,L1);
    solution.ListTraverse(L2);
}