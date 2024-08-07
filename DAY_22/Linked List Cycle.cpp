/* LeetCode Problem 
Link to problem description - https://leetcode.com/problems/linked-list-cycle/ */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) {
        return false;
    }
    
    ListNode *slow = head;
    ListNode *fast = head->next;
    
    while (slow != fast) {
        if (!fast || !fast->next) {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return true;
    }
    ListNode* createLinkedListWithCycle(int arr[], int n, int pos) {
    if (n == 0) return nullptr;
    
    ListNode* head = new ListNode(arr[0]);
    ListNode* tail = head;
    ListNode* cycleStart = nullptr;
    
    if (pos >= 0 && pos < n) {
        cycleStart = head;
    }
    
    for (int i = 1; i < n; ++i) {
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
        if (i == pos) {
            cycleStart = tail;
        }
    }
    
    if (cycleStart) {
        tail->next = cycleStart;
    }
    
    return head;
}
};
