#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

void Traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

Node *Reverse(Node *head)
{
    Node *p;
    Node *q = new Node();
    Node *front;
    p = head;
    q = head->next;
    front = head->next;
    while (front->next)
    {
        front = front->next;
        q->next = p;
        p = q;
        q = front;
    }
    head->next = NULL;
    front->next = p;
    return q;
}


Node *Addition(Node *head)
{
    Node *current = head;
    int carry = 1;
    Node *p = new Node();
    while (current && carry)
    {
        int sum = current->data + carry;
        current->data = sum % 10;
        carry = sum / 10;

        if (!current->next)
        {
            current->next = p;
            p->data = carry;
            p->next = NULL;
        }
        current=current->next;
    }
    head = Reverse(head);
    return head;
}
int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();

    // Assign data and link nodes
    head->data = 1;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 0;
    fifth->next = sixth;

    sixth->data = 9;
    sixth->next = NULL;

    cout << "Original: \n";
    Traversal(head);
    cout << "After Addition : \n";

    head = Reverse(head);
    head = Addition(head);

    Traversal(head);
    Node *cur = head;
    while (cur != NULL)
    {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
}