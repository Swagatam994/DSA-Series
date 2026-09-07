#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *ReverseLL(Node *head)
{
    Node *p = new Node();
    Node *q = new Node();
    Node *front = new Node();
    p = head;
    q = head->next;
    front = head->next;
    while (front->next != NULL)
    {
        front = front->next;
        q->next = p;
        p = q;
        q = front;
    }
    head->next = NULL;
    front->next = p;
    // head=q;

    return q;
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
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();

    // Assign data and link nodes
    head->data = 7;
    head->next = second;

    second->data = 16;
    second->next = third;

    third->data = 21;
    third->next = fourth;

    fourth->data = 45;
    fourth->next = fifth;

    fifth->data = 60;
    fifth->next = sixth;

    sixth->data = 55;
    sixth->next = NULL;

    cout << "Original: \n";
    Traversal(head);
    cout << "Rversed: \n";

    head = ReverseLL(head);
    Traversal(head);
     Node *cur = head;
    while(cur!=NULL){
        Node *next = cur->next;
        delete cur;
        cur = next;
    }
}