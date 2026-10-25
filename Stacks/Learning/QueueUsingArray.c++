#include<bits/stdc++.h>
using namespace std;

class ArrayQueue
{
private:
    int *arr;
    int start,end;
    int currSize,maxSize;
public:
    ArrayQueue()
    {
        arr=new int[10];
        start=-1,end=-1;
        currSize=0,maxSize=10;
    }
    ~ArrayQueue()
    {
        delete []arr;
    }

    void push(int num)
    {
        if(currSize==maxSize)
        {
            cout<<"Queue is full "<<endl;
            exit(1) ;
        }

        if(end==-1)
        {
            start=0,end=0;

        }
        else{
            end=(end+1)%maxSize;
        }
        arr[end]=num;
        currSize++;


    }

    int pop()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            exit(1);
        }

        int popped=arr[start];
        if(currSize==1)
        {
            start=-1,end=-1;
        }
        else{
            start=(start+1)%maxSize;
        }
        currSize--;
        return popped;
    }

    int peek()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
            exit(1);
        }
        return arr[start];
    }

    bool isEmpty()
    {
        if(start==-1) return true;

        else return false;
    }
};

int main()
{
    ArrayQueue queue;
    vector<string> commands = {"ArrayQueue", "push", "push", 
                               "peek", "pop", "isEmpty"};
    vector<vector<int>> inputs = {{}, {5}, {10}, {}, {}, {}};

    for (int i = 0; i < commands.size(); ++i) {
        if (commands[i] == "push") {
            queue.push(inputs[i][0]);
            cout << "null ";
        } else if (commands[i] == "pop") {
            cout << queue.pop() << " ";
        } else if (commands[i] == "peek") {
            cout << queue.peek() << " ";
        } else if (commands[i] == "isEmpty") {
            cout << (queue.isEmpty() ? "true" : "false") << " ";
        } else if (commands[i] == "ArrayQueue") {
            cout << "null ";
        }
    }

}