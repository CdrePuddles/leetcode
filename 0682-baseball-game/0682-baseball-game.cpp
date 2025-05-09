class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> myStack;

        int val = 0;
        int temp = 0;
        int ret = 0;

        for (string op : operations) {
            if (op == "C") {
                myStack.pop();
            } else if (op == "D") {
                val = myStack.top();
                val += val;
                myStack.push(val);
            } else if (op == "+") {
                temp = myStack.top();
                myStack.pop();
                val = myStack.top() + temp;
                myStack.push(temp);
                myStack.push(val);
            } else {
                myStack.push(stoi(op));
            }
        }

        while (!myStack.empty()) {
            ret += myStack.top();
            myStack.pop();
        }

        return ret;
    }
};