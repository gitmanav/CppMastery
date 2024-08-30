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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* temp=head;
        ListNode* temp2=head->next;
        int last=temp->val;
        
        while(temp2!=NULL)
        {
            if(last==temp2->val)
            {
                if(temp2->next==NULL)
                {
                    temp->next=nullptr;
                    break;
                }
                temp2=temp2->next;
                temp->next=temp2;
            }
            else
            {
                
                temp=temp2;
                last=temp->val;
                temp2=temp2->next;
            }
        }
        return head;
    }
};