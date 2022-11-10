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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(0);
        ListNode* temp=head;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            int x,y;
            if(l1==NULL)
            {
                x=0;
            }
            else
            {
                x=l1->val;
            }
            
            if(l2==NULL)
            {
                y=0;
            }
            else
            {
                y=l2->val;
            }
            int sum=x+y+carry;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
            
        }
        return head->next;
    }
};