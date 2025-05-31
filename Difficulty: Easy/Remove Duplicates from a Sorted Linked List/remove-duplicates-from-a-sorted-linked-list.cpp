/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        if(head==NULL)
        {
            return NULL;
        }
        Node* temp=head;
        
        while(temp!=NULL)
        {
            if((temp->next!=NULL) && (temp->data == temp->next->data))
            {
                Node* curr=temp->next;
                temp->next=temp->next->next;
                delete(curr);
            }
            else
            {
                temp=temp->next;
            }
        }
        return head;
        
    }
};