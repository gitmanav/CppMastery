/*
  Node is defined as
    struct node
    {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }

    }*head;
*/

class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        // code here
        if(head==NULL)
        {
            return NULL;
        }
        Node* curr=head;
        Node* prev=NULL;
        Node* frwd=NULL;
        int count=0;
        while(curr!=NULL && count<k)
        {
            frwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frwd;
            count++;
        }
        if(frwd!=NULL)
        {
            head->next=reverseKGroup(frwd,k);
        }
        return prev;
    }
};