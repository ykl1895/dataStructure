#include <iostream>
#include <w32api/commctrl.h>

using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;

    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:

    ListNode * FindMeetPoint(ListNode *head)
    {
        ListNode * pmeet=new ListNode(0);
        ListNode *slow,*fast;
        slow=fast=head;
        while(slow->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                pmeet = slow;
                return pmeet;
            }
        }
        return head;
    }

    bool hasCycle(ListNode *head) {
        ListNode *pmeet=new ListNode(0);
        pmeet=FindMeetPoint(head);
        if(pmeet==head)
        return 0;
    }

    ListNode* findLoopStart(ListNode *head)
    {
        if(!(hasCycle(head)))
        return NULL;
        ListNode *slow,*fast;
        ListNode *pmeet=new ListNode(0);
        pmeet=FindMeetPoint(head);
        ListNode *p1=head;
        ListNode *p2=pmeet;
        while(p1!=p2)
        {
            p1=p1->next;
            p2=p2->next;
        }
        return p1;
    }

    int Looplength(ListNode *head)
    {
        if (!(hasCycle(head)))
            return 0;
        ListNode *pmeet = new ListNode(0);
        pmeet = FindMeetPoint(head);
        ListNode *slow, *fast;
        slow = fast = pmeet;
        int j = 0;
        while (slow->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
            j++;
            if (slow == fast) {
                pmeet = slow;
                return j;
            }
        }
    }

    int startlength(ListNode* head)
    {
        int i=0;
        if(!(hasCycle(head)))
        {
            while(head)
            {
                head=head->next;
                ++i;
            }
            return i;
        }
        ListNode * p1;
        p1=findLoopStart(head);
        while (p1==head)
        {
            head=head->next;
            i++;
        }
        return i;
    }

    int linklength(ListNode *head)
    {
        int i=0;
        i=startlength(head)+Looplength(head);
        return i;
    }


};