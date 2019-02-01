#include <iostream>
using namespace std;



//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
     ListNode* middleNode(ListNode* head)
     {
         int i=0;
         ListNode *p1=head;
         while(p1->next)
         {
             p1=p1->next;
             i++;
         }

         int j=i/2;
         while(j--)
         {
             head=head->next;
         }
         return head;
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
    solution.addAtTail(L,2);
    solution.addAtTail(L,3);
    solution.addAtTail(L,4);
    solution.addAtTail(L,5);
    solution.ListTraverse(L);
    newL=solution.middleNode(L);
    solution.ListTraverse(newL);


    return 0;
}