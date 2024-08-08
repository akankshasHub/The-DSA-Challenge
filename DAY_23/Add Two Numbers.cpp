/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/add-two-numbers/description/ */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* curr = dummyHead;
        int carry = 0;
        
        while (p != nullptr || q != nullptr) {
            int x = (p != nullptr) ? p->val : 0;
            int y = (q != nullptr) ? q->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            if (p != nullptr) p = p->next;
            if (q != nullptr) q = q->next;
        }
        
        if (carry > 0) {
            curr->next = new ListNode(carry);
        }
        
        ListNode* result = dummyHead->next;
        delete dummyHead;
        
        return result;
    }


// Function to create a linked list from an array (for testing)
ListNode* createLinkedList(vector<int>& values) {
    if (values.empty()) return nullptr;
    
    ListNode* head = new ListNode(values[0]);
    ListNode* curr = head;
    
    for (int i = 1; i < values.size(); ++i) {
        curr->next = new ListNode(values[i]);
        curr = curr->next;
    }
    
    return head;
}

// Function to print the linked list (for testing)
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}
    };