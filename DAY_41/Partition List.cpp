/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/partition-list/description/ */

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
    ListNode* partition(ListNode* head, int x) {
           ListNode* lessDummy = new ListNode(0);
        ListNode* greaterDummy = new ListNode(0);
        
        // Two pointers to build the two lists
        ListNode* less = lessDummy;
        ListNode* greater = greaterDummy;
        
        // Traverse the original list and partition it
        while (head) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }
        
        // Connect the two partitions
        greater->next = nullptr; // Important to terminate the list
        less->next = greaterDummy->next;
        
        // The head of the partitioned list is the next of the dummy node
        ListNode* result = lessDummy->next;
        
        // Free the dummy nodes
        delete lessDummy;
        delete greaterDummy;
        
        return result;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}