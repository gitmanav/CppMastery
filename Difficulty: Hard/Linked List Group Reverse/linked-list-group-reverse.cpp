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
        if(head == NULL)
        {
            return NULL;
        }
        // STEP 1: REVERSE 1ST k nodes
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
        // STEP2: REVERSE REMAINING LL
        if(frwd!=NULL){
        head->next=reverseKGroup(frwd,k);
        }
        return prev;
    }
};