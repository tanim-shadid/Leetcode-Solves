/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
        Node* tem=head;
        while(tem!=NULL)
        {
            Node* copy=new Node(tem->val);
            copy->next=tem->next;
            tem->next=copy;
            tem=copy->next;
        }
        Node* newHead=head->next;
        tem=head;
        while(tem!=NULL)
        {
            if(tem->random!=NULL)
            {
                tem->next->random=tem->random->next;
            }
            tem=tem->next->next;
        }
        tem=head;
        while(tem!=NULL)
        {
            Node* copy=tem->next;
            tem->next=copy->next;
            if(copy->next!=NULL)
            {
                copy->next=copy->next->next;
            }
            tem=tem->next;
        }
        return newHead;
    }
};
