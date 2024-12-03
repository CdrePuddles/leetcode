class MyQueue {
public:
    MyQueue() {
    }
        stack<int> firstStack;
        stack<int> secondStack;
    
    void push(int x) {
        while (!firstStack.empty()) {
            secondStack.push(firstStack.top());
            firstStack.pop();
        }

        firstStack.push(x);

        while (!secondStack.empty()) {
            firstStack.push(secondStack.top());
            secondStack.pop();
        }
    }
    
    int pop() {
        int ret = firstStack.top();
        firstStack.pop();
        return ret;
    }
    
    int peek() {
        int ret = firstStack.top();

        return ret;
    }
    
    bool empty() {
        return !firstStack.size();
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