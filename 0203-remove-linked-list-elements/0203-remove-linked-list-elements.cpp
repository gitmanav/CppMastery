/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = nullptr;
        ListNode* temp2 = head;

        while (temp2 != nullptr) {
            if (temp2->val == val) {
                if (temp == nullptr) {
                    head = head->next;
                    temp2 = head;
                } else if (temp2->next == nullptr) {
                    temp->next = nullptr;
                    break;
                } else {
                    temp2 = temp2->next;
                    temp->next = temp2;
                }
            } else {
                temp = temp2;
                temp2 = temp->next;
            }
        }

        return head;
    }
};