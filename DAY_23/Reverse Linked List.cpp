/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/reverse-linked-list/description/ */

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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next; // Store next node
            curr->next = prev; // Reverse current node's pointer
            
            // Move pointers one position ahead
            prev = curr;
            curr = nextTemp;
        }
        
        return prev;
    }
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
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}
};