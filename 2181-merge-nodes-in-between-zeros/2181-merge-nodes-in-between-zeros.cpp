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
    void insertAtTail(ListNode* &head,ListNode* &tail,int data)
    {
        ListNode* newNode=new ListNode(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        else
        {
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    ListNode* mergeNodes(ListNode* head) {
        int data=0;
        ListNode* temp=head;
        ListNode* newHead=NULL;
        ListNode* newTail=NULL;
        while(temp!=NULL)
        {
            int curr=temp->val;
            if(curr!=0)
            {
                // ListNode* newNode=new ListNode(data);
                data+=temp->val;
                if(temp->next->val == 0)
                    insertAtTail(newHead,newTail,data);
                
            }
            else
            {
                data=0;
            }
            temp=temp->next;
        }
        return newHead;
    }
};