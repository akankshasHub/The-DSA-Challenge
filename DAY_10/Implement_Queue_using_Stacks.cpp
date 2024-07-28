/* LeetCode Problem
Link to problem description - https://leetcode.com/problems/implement-queue-using-stacks/description/ */

class MyQueue {
    private:
    stack<int> s1, s2;

    void transferStack() {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
         
    }
    
    int pop() {
                if (s2.empty()) {
            transferStack();
        }
        int frontElement = s2.top();
        s2.pop();
        return frontElement;

    }
    
    int peek() {
        if (s2.empty()) {
            transferStack();
        }
        return s2.top();
    }
    
    bool empty() {
          return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */