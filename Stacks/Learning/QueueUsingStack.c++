#include<bits/stdc++.h>
using namespace std;

class StackQueue
{
    private:
    stack <int>input,output;

    public:

    StackQueue(){

    }

    void push(int num)
    {
        input.push(num);
    }

    int pop()
    {
        if(output.empty())
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();

            }
        }

        if(output.empty()) 
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int x=output.top();
        output.pop();
        return x;
    }

    int peek()
    {
        if(output.empty())
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
        }

        if(output.empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        return output.top();
    }

    bool isEmpty()
    {
        return output.empty();
    }
};
int main()
{
   StackQueue q;
    
    // List of commands
    vector<string> commands = {"StackQueue", "push", "push", 
                               "pop", "peek", "isEmpty"};
    // List of inputs
    vector<vector<int>> inputs = {{}, {4}, {8}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            q.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << q.pop() << " ";
        } else if (commands[i] == "peek") {
            cout << q.peek() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (q.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "StackQueue") {
            cout << "null ";
        }
    }
}