/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int x=0;
        ListNode*tem=head;
        while(tem!=NULL)
        {
            x++;
            tem=tem->next;
        }
        int y=x-n+1;
        if(y==1)
        {
            ListNode*delhead=head;
            head=head->next;
            delete delhead;
            return head;

        }
        ListNode*curr=head;
        for(int i=1;i<y-1;i++)
        {
             curr=curr->next;

        }
        ListNode*del=curr->next;
        curr->next=curr->next->next;
        delete del;
        return head;

    }
};
