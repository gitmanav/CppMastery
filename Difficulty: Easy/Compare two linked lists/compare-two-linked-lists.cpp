//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};
*/

// Compare two strings represented as linked lists
class Solution {
  public:
    int compare(Node *head1, Node *head2) {
        // Code Here
        // int count1=0;
        // int count2=0;
        // Node* temp=head1;
        // while(temp!=NULL)
        // {
        //     count1++;
        //     temp=temp->next;
        // }
        // temp=head2;
        // while(temp!=NULL)
        // {
        //     count2++;
        //     temp=temp->next;
        // }
        // if(count1>count2)
        // {
        //     return 1;
        // }
        // if(count2>count1)
        // {
        //     return -1;
        // }
        Node* temp1=head1;
        Node* temp2=head2;
        while(temp1!=NULL && temp2!=NULL)
        {
            int a=temp1->data - 'a';
            int b=temp2->data - 'a';
            if(a>b)
            {
                return 1;
            }
            else if(b>a)
            {
                return -1;
            }
            // if(a!=b)
            // {
            //     if(a>b)
            //     {
            //         return 1;
            //     }
            //     else
            //     {
            //         return -1;
            //     }
            // }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(temp1==NULL && temp2!=NULL)
        {
            return -1;
        }
        if(temp1!=NULL && temp2==NULL)
        {
            return 1;
        }
        return 0;
    }
    };

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after reading integer

    while (t--) {
        Node *list1 = NULL, *list2 = NULL;
        string line;

        // Read first list
        getline(cin, line);
        istringstream iss1(line);
        char x;
        iss1 >> x;
        Node *temp1 = new Node(x);
        list1 = temp1;
        Node *current1 = temp1;

        while (iss1 >> x) {
            Node *newNode = new Node(x);
            current1->next = newNode;
            current1 = newNode;
        }

        // Read second list
        getline(cin, line);
        istringstream iss2(line);
        iss2 >> x;
        Node *temp2 = new Node(x);
        list2 = temp2;
        Node *current2 = temp2;

        while (iss2 >> x) {
            Node *newNode = new Node(x);
            current2->next = newNode;
            current2 = newNode;
        }

        // Compare lists
        Solution obj;
        cout << obj.compare(list1, list2) << endl;

        // Clean up memory
        Node *tmp;
        while (list1 != NULL) {
            tmp = list1;
            list1 = list1->next;
            delete tmp;
        }
        while (list2 != NULL) {
            tmp = list2;
            list2 = list2->next;
            delete tmp;
        }
    }

    return 0;
}

// } Driver Code Ends