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
    
        ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head->next==NULL)return NULL;
        ListNode *x=head;
        int cnt=0;
        while(cnt!=n)
        {
            x=x->next;
            cnt++;
        } 
        ListNode *s=head;
        ListNode *p;
        while(x!=NULL)
        {
            p=s;
            s=s->next;
            x=x->next;
        }
        x=head;
        p=NULL;
        while(x!=s){p=x;x=x->next;}
        if(p==NULL){head=head->next;return head;}
            
        if(s->next==NULL)s==NULL;
        p->next=s->next;
        return head;
    }
    
};