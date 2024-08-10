//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
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
    // Function to rotate a linked list.
    Node* rotate(Node* head, int k) {
       Node *tail=head,*t = head;
        //The base case, in everylinked list problem, this part is important
        if(head == nullptr or head->next == nullptr)
        {
            return head;
        }
        while(t->next != NULL)
        {
            t = t->next;
        }
        tail = t;
        
        while(k>0)
        {
            Node* temp = head;
            head = head->next;
            //cout<<"The value of head is "<<head->data<<" and ";
            temp->next = nullptr;
            tail->next = temp;
            tail = tail->next;
            //cout<<"The value of tail is "<<tail->data<<endl;
            tail->next = nullptr;
            
            k--;
            //delete(temp);
        }
        return head;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        // Read numbers from the input line
        while (ss >> number) {
            arr.push_back(number);
        }

        Node* head = nullptr;

        // Check if the array is empty
        if (!arr.empty()) {
            head = new Node(arr[0]);
            Node* tail = head;
            for (size_t i = 1; i < arr.size(); ++i) {
                tail->next = new Node(arr[i]);
                tail = tail->next;
            }
        }
        int k;
        cin >> k;
        cin.ignore();

        Solution ob;
        head = ob.rotate(head, k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends