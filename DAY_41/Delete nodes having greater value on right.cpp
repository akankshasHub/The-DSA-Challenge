/*GeeksforGeeks Problem
Link to problem description - https://www.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1 */

class Solution {
  public:
     Node* reverseList(Node* head) {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        return prev;
    }
    Node *compute(Node *head) {
        // your code goes here
          head = reverseList(head);
           Node* maxNode = head;
        Node* current = head;
          while (current != nullptr && current->next != nullptr) {
               if (current->next->data < maxNode->data) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
               } else {
                    current = current->next;
                maxNode = current;
            }
        }
         head = reverseList(head);
        return head;
    }
};
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
