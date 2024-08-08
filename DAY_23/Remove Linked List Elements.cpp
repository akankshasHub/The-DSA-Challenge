/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/remove-linked-list-elements/description/ */

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
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (curr->val == val) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next; // Move curr to the next node
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        
        ListNode* newHead = dummy->next;
        delete dummy;
        
        return newHead;
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