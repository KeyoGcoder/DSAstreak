#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
private:
    stack<int> values;
    stack<int> minValues;

public:
    MinStack() {
    }

    void push(int val) {
        values.push(val);

        if (minValues.empty()) {
            minValues.push(val);
        } else {
            minValues.push(min(val, minValues.top()));
        }
    }

    void pop() {
        values.pop();
        minValues.pop();
    }

    int top() {
        return values.top();
    }

    int getMin() {
        return minValues.top();
    }
};