/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        // code here
        if(head==NULL)
        {
            return;
        }
        map<Node*, bool> visited;
        Node* temp=head;
        Node* prev=NULL;
        while(temp!=NULL)
        {
            if(visited[temp]==1)
            {
                break;
            }
            visited[temp]=1;
            prev=temp;
            temp=temp->next;
        }
        if(visited[temp]==1)
        {
            prev->next=NULL;
        }
    }
};