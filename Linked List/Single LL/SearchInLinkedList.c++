#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    // Create nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
    int x;
    // Assign data and link nodes
    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 21;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = sixth;

    sixth->data = 11;
    sixth->next = NULL;
    cout << "Enter the number to search : ";
    cin >> x;

    for (int i = 0; head->next != NULL; i++)
    {

        if (head->data == x)
        {
            cout << "Number found in "<<i<<" position";
            return 0;
        }
        head = head->next;
    }

cout << "Number not found";
Node *cur = head;
while (cur != NULL)
{
    Node *next = cur->next;
    delete cur;
    cur = next;
}

return 0;
}