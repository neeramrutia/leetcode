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
        int a=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            a++;
            temp=temp->next;
        }
        if(a==n)
        {
            head=head->next;
            return head;
        }
        int pos=a-n+1;
        ListNode* prev=NULL;
        ListNode* curr=head;
        int count=1;
        while(count<pos)
        {
             prev=curr;
             curr=curr->next;
             count++;
        }
        prev->next=curr->next;
        return head;
    }
};