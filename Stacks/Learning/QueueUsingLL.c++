#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LLQueue{

    private:
    Node * start;
    Node * end;
    int size;

    public:
    LLQueue(){
        start=end=NULL;
        size=0;
    }

    void push(int num)
    {
        Node *element=new Node();
        element->data=num;
        element->next=NULL;
        if(start==NULL) 
        {
            start=end=element;
        }
        
        else{
           end->next=element;
           end=element;

        }
        size++;
    }

    int pop()
    {
        if(size==0)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        int value=start->data;
        
        Node *temp=start;
        start=start->next;

        delete temp;

        size--;
        return value;
    }

    int peek()
    {
        if(start==NULL){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        return start->data;
    }

    bool isEmpty()
    {
        return size==0;
    }
};

int main()
{
    LLQueue q;

    // List of commands
    vector<string> commands = {"LinkedListQueue", "push", "push", 
                               "peek", "pop","pop", "isEmpty"};
    // List of inputs
    vector<vector<int>> inputs = {{}, {3}, {7},{}, {}, {}, {}};

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
        } else if (commands[i] == "LinkedListQueue") {
            cout << "null ";
        }
    }
}