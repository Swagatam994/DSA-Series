#include <bits/stdc++.h>
using namespace std;

class ArrayStack
{
private:
    int *stackArray;
    int capacity;
    int topIdx;

public:
    // constructor
    ArrayStack(int size = 1000)
    {
        capacity = size;
        stackArray = new int[capacity];
        topIdx = -1;
    }

    // deconstructor

    ~ArrayStack()
    {
        delete[] stackArray;
    }

    void push(int num)
    {
        if (topIdx == capacity - 1)
        {
            cout << "Stack overflow" << endl;
            return;
        }
        stackArray[++topIdx] = num;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return stackArray[topIdx--];
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return stackArray[topIdx];
    }

    bool isEmpty()
    {
        return topIdx == -1;
    }
};
int main()
{
    ArrayStack stack;
    vector<string> commands = {"ArrayStack", "push", "push", "pop", "top", "isEmpty"};
    vector<vector<int>> inputs = {{}, {5}, {10}, {}, {}, {}};

    for (size_t i = 0; i < commands.size(); ++i)
    {
        if (commands[i] == "push")
        {
            stack.push(inputs[i][0]);
            cout << "null ";
        }
        else if (commands[i] == "pop")
        {
            cout << stack.pop() << " ";
        }
        else if (commands[i] == "top")
        {
            cout << stack.top() << " ";
        }
        else if (commands[i] == "isEmpty")
        {
            cout << (stack.isEmpty() ? "true" : "false") << " ";
        }
        else if (commands[i] == "ArrayStack")
        {
            cout << "null ";
        }
    }
    return 0;
}