#include<bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<int> arr;
    int mini;

public:
    MinStack() { mini = INT_MAX; }

    void push(int value) {
        if (arr.empty()) {
            arr.push(value);
            mini = value;
            return;
        }

        if(value>=mini) arr.push(value);

        else {
            int x=2*value;
            arr.push(x-mini);
            mini = value;
        }
    }

    void pop() {
        if(arr.empty()) return ;

        if(arr.top()<mini)
        {
            int x=2*mini;
            mini=x-arr.top();
            arr.pop();
        }
        else arr.pop();
    }

    int top() {
        if(arr.empty()) return -1;
        if(arr.top()>=mini) return arr.top();

        return mini;
    }

    int getMin() {
        return mini;
    }
};


   int main() {
    MinStack s;
    
    // Function calls
    s.push(-2);
    s.push(0);
    s.push(-3);
    cout << s.getMin() << " ";
    s.pop();
    cout << s.top() << " ";
    s.pop();
    cout << s.getMin();
    
    return 0;

}