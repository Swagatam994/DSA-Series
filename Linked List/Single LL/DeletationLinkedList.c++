#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *DeleteHead(Node *head)
{
    head = head->next;
    
    // return head;
}

Node *DeleteAtEnd(Node *head)
{
    Node *p = head;
    Node *q = p->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    return p;
    delete (q);
}

Node *DeleteAtIndex(Node *head, int n)
{
    Node *p = head;
    Node *q = p->next;
    for (int i = 1; i < n; i++)
    {
        q = q->next;
        p = p->next;
    }
    p->next = q->next;
    delete (q);
    return p;
}

void Traversal(Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    // Create nodes
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();

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

    // Traverse and print
    Traversal(head);
    head = DeleteHead(head);
    cout<<"After deleting the head \n";
    Traversal(head);
    DeleteAtIndex(head,3);
    cout<<"After deleting the  index 3 \n";
    Traversal(head);
    cout<<"After deleting the end node \n";
    DeleteAtEnd(head);

    Traversal(head);
    // Free memory
    Node *cur = head;
    while (cur != NULL)
    {
        Node *next = cur->next;
        delete cur;
        cur = next;
    }

    return 0;
}