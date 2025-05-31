/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) {
        // your code here
        if(head==NULL)
        {
            return false;
        }
        map<Node*, bool> visited;
        
        Node* temp=head;
        while(temp!=NULL)
        {
            if(visited[temp] == true)
            {
                return true;
            }
            visited[temp]=true;
            temp=temp->next;
        }
        return false;
    }
};