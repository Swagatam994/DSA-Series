#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node* next;
};

class LLStack
{
    private:
    int size;
    Node * head;

    public:

    LLStack(){
        head=NULL;
        size=0;
    }
    void push(int num)
    {
        Node* element=new Node();
        element->data=num;
        

        element->next=head;
        head=element;

        size++;
    }

    int pop()
    {
        if(head==NULL) {
            cout<<"Stack underflow"<<endl;
            return -1;

        }

        int value=head->data;

        Node *temp=head;
        head=head->next;
        

        delete temp;
       
        size--;
        return value;
    }

    int top()
    {
        if(head==NULL) 
        {
            cout<<"Stack underflow"<<endl;
            return -1;
        }

        return head->data;
    }

    bool isEmpty()
    {
        return size==0;
    }
};
int main()
{
    LLStack st;

    // List of commands
    vector<string> commands = {"LinkedListStack", "push", "push","push", 
                               "pop", "top","pop", "isEmpty"};
    // List of inputs
    vector<vector<int>> inputs = {{}, {3}, {7},{6}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            st.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << st.pop() << " ";
        } else if (commands[i] == "top") {
            cout << st.top() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (st.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "LinkedListStack") {
            cout << "null ";
        }
    }

}