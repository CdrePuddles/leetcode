class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        int first;
        int second;

        for (string c : tokens) {
            if (c == "+") {
                first = stack.top(); stack.pop();
                second = stack.top(); stack.pop();
                stack.push(first + second);

            } else if (c == "-") {
                first = stack.top(); stack.pop();
                second = stack.top(); stack.pop();
                stack.push(second - first);
            } else if (c == "*") {
                first = stack.top(); stack.pop();
                second = stack.top(); stack.pop();
                stack.push(first * second);
            } else if (c == "/") {
                first = stack.top(); stack.pop();
                second = stack.top(); stack.pop();
                stack.push(second / first);
            } else {
                stack.push(stoi(c));
            }
        }

        return stack.top();
    }
};