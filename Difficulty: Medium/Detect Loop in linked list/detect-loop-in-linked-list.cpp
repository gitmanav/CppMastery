/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            // if(fast->next!=NULL)
            // {
            //     fast=fast->next;
            // }
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
    }
};