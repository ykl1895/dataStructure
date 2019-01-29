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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *p1=head,*p2,*tmp;
        while(p1!=NULL)
        {
            p2=p1;
            while(p2->next!=NULL)
            {
                tmp=p2;
                p2=p2->next;
                if(p2->val==p1->val)
                {
                    tmp->next=p2->next;
                    p2=tmp;
                }
            }
            p1=p1->next;

        }
        return head;

    }

    void addAtHead(ListNode *head,int val) {
        ListNode * new_L = new ListNode(0);
        new_L->val=val;
        new_L->next=head->next;
        head->next=new_L;
    }


    void ListTraverse( ListNode *head)
    {
        ListNode * p=head;
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
    solution.addAtHead(L,0);
     solution.addAtHead(L,0);
//    solution.addAtHead(L,0);
//    solution.addAtHead(L,0);
//    solution.addAtHead(L,0);
    solution.ListTraverse(L);
    newL=solution.deleteDuplicates(L);
    solution.ListTraverse(newL);


    return 0;
}