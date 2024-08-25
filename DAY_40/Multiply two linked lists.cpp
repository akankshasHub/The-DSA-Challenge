/*GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/multiply-two-linked-lists/1 */

class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        // code here
         long long num1 = 0, num2 = 0;
         while (first != nullptr) {
            num1 = (num1 * 10 + first->data) % MOD;
            first = first->next;
        }

while (second != nullptr) {
            num2 = (num2 * 10 + second->data) % MOD;
            second = second->next;
        }

return (num1 * num2) % MOD;
    }
};

Node* createList(const vector<int>& nums) {
    if (nums.empty()) return nullptr;

    Node* head = new Node(nums[0]);
    Node* current = head;
    for (size_t i = 1; i < nums.size(); ++i) {
        current->next = new Node(nums[i]);
        current = current->next;
    }
    return head;
}
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}