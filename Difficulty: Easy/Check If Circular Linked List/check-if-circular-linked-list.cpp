/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        if(head==NULL)
        {
            return true;
        }
        Node* temp=head->next;
        while(temp!=NULL && temp!= head)
        {
            temp=temp->next;
        }
        if(temp==head)
        {
            return true;
        }
        return false;
    }
};