#include <iostream>
using namespace std;



//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

    class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode* p=new ListNode(0);
            p->next=head;
            int i=0;
            while(p->next!=NULL)
            {
                p=p->next;
                i++;
            }
            ListNode*pre=new ListNode(0);
            pre->next=head;

            ListNode*p1=pre;
            int m=i-n;


            while(m)
            {
                m--;
                p1=p1->next;
            }
            ListNode*tmp=new ListNode(0);
            tmp=p1->next;
            p1->next=tmp->next;

            return pre->next;

        }


    void addAtHead(ListNode*head,int val) {
        ListNode * new_L = new ListNode(0);
        new_L->val=val;
        new_L->next=head->next;
        head->next=new_L;
    }

    void addAtTail(ListNode *head,int val) {
        ListNode *new_L=new ListNode(0);
        new_L->val=val;
        new_L->next=NULL;
        if(head->next!=NULL)
        {
            ListNode * tmp = head->next;
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


    void ListTraverse( ListNode *head)
    {
        ListNode * p=head->next;
        while(p)
        {
            cout<<p->val<<' ';
            p=p->next;
        }
        cout<<endl;
    }




};

int main() {
    int i=0,j=0;
    ListNode *L=new ListNode(0);
    ListNode *newL=new ListNode(0);
    Solution solution;
    solution.addAtHead(L,1);
//    solution.addAtTail(L,2);
//    solution.addAtTail(L,3);
//    solution.addAtTail(L,4);
//    solution.addAtTail(L,5);
    solution.ListTraverse(L);
    newL=solution.removeNthFromEnd(L,1);
    solution.ListTraverse(newL);


    return 0;
}