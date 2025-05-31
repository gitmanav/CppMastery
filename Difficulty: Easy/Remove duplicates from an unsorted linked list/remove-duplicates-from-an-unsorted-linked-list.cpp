/*
The structure of linked list is the following

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
    Node *removeDuplicates(Node *head) {
        // your code goes here
        unordered_set<int> hashSet;
        Node* prev=NULL;
        Node* curr=head;
        
        while(curr!=NULL)
        {
            if(hashSet.find(curr->data) != hashSet.end())
            {
                prev->next=curr->next;
                Node* del=curr;
                curr=curr->next;
            }
            else
            {
                hashSet.insert(curr->data);
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};