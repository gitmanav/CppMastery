/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        if(head==NULL)
        {
            return 0;
        }
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!= NULL && slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
            }
        }
        if(fast==NULL || fast->next==NULL)
        {
            return 0;
        }
        int ans=1;
        slow=slow->next;
        while(slow!=fast)
        {
            slow=slow->next;
            ans++;
        }
        
        return ans;
    }
};